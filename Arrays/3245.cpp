#include <iostream>
using namespace std;
int main(){
	int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};
	int brr[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			brr[j][i]=arr[i][j];
		}
	}
	cout<<"TRanspose of array is : ";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<brr[j][i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
