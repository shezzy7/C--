#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter size : ";
	cin>>n;
	int arr[n];
	cout<"Enter array : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
		}
		for(int i=0;i<n-1;i++){
			int x=i;
			for(int j=i+1;j<n;j++){
				if(arr[j]<arr[x]){
					x=j;
				}
			}
			if(x!=i){
				swap(arr[i],arr[x]);
			}
			
		}
		cout<<"Elements after sorting are : ";
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
} 
