#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	cout<<"enter elemnt : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++){
		
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				swap(arr[i],arr[j]);
				
			}
		}
	}
	cout<<"the 2nd smallest elemnt is : "<<arr[1];
	return 0;
}
