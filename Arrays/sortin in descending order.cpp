#include <iostream>
using namespace std;

int  main(){
	int x;
	cout<<"enter size of array : ";
	cin>>x;
	int arr[x];
	cout<<"enter elemnts\n";
	for(int i=0;i<x;i++){
		cin>>arr[i];
	}
	//sorting in descending order
	for(int i=0;i<x-1;i++){
		for(int j=i+1;j<x;j++){
			if(arr[i]<arr[j]){
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	cout<<"sorted elemnts in descending order : ";
	for(int i=0;i<x;i++){
		cout<<arr[i]<<" ";
		
	}
	cout<<"third largest elemnt is : ";
	cout<<arr[2];
	return 0;
}

