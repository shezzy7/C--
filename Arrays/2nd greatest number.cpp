#include <iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n;
	int arr[n];
	cout<<"enter elements of array : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]<arr[j]){
				m=arr[i];
				arr[i]=arr[j];
				arr[j]=m;
			}
		}
	}
	cout<<"elements sorted in form : ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"2nd largest element is : "<<arr[1]<<endl;
		return 0;
	}
