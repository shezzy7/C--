#include <iostream>
using namespace std;
int main(){
//	int n,m;
//	cout<<"enter no. of rows : ";
//	cin>>n;
//	cout<<endl;
//	cout<<"enter no. of coloumns : ";
//	cin>>m;
	int arr[3][3];
	int brr[3][3];
	cout<<"enter values of  array : ";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			brr[i][j]=arr[j][i];
		}
	}
	cout<<"transpose of arr is \n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<brr[i][j]<<" ";
		}
		cout<<endl;
	}
}
