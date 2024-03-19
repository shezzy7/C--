#include <iostream>
using namespace std;
int main(){
	int n,m;
	cout<<"enter no. of rows : ";
	cin>>n;
	cout<<endl;
	cout<<"enter no. of coloumns : ";
	cin>>m;
	int arr[n][m];
	int brr[m][n];
	cout<<"enter values of  array : ";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			brr[i][j]=arr[j][i];
		}
	}
	cout<<"transpose of arr is \n";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<brr[i][j]<<" ";
		}
		cout<<endl;
	}
}
