#include <iostream>
using namespace std;
int main(){
	int arr[]={2,3,4,5,2,4,5};
	int size=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(arr[i]==arr[j]){
				arr[i]=arr[j]=-1;
			}
		}
	}
		cout<<"unique elements are : ";
	for(int i=0;i<size;i++){
		if(arr[i]!=-1){
			cout<<arr[i]<<" ";
		}
	}
	return 0;	
	}
