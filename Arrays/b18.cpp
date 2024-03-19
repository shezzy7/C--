#include <iostream>
using namespace std;
int main(){
	int n,m;
	cout<<"Enter no of rows : ";
	cin>>n;
	cout<<"Enter no of coloumns : ";
	cin>>m;
	int arr[n][m];
	int brr[n][m];
	int crr[n][m];
	//inputing arr
	cout<<"Enter elements of array 1 : ";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	//inputng brr
	cout<<"Enter elements aof array 2 : ";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>brr[n][m];
		}
	}
	//adding
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			crr[i][j]=arr[i][j]+brr[i][j];
		}
	}
	cout<<"Resultant array is \n ";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<crr[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
