#include <iostream>
using namespace std;
void copy(int arr[][3],int i,int j){
	int brr[i][j];
	for(int k=0;k<i;k++){
		for(int l=0;l<j;l++){
			brr[k][l]=arr[l][k];
		}
	}
	
	cout<<"transpose of arr is "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<brr[i][j]<<"  ";
		}
		cout<<endl;
}
}
int main(){
	int arr[3][3];
	cout<<"enter values of arrays\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>arr[i][j];
		}
}
	copy(arr,3,3);
//	int brr[3][3];
//	for(int i=0;i<3;i++){
//		for(int j=0;j<3;j++){
//			brr[i][j]=arr[j][i];
//		}
//	}
//		cout<<endl;
	
	
}
