#include <iostream>
using namespace std;
int main(){
	int n,m;
	cout<<"Enter n and m : ";
	cin>>n>>m;
	int arr[n][m];
	cout<<"Enter "<<n*m<< "elements  of array : ";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	cout<<"Elements in original order are : \n";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
		cout<<"Elements in transpose form are : \n";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
