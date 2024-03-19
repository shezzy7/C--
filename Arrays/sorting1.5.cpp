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
	//sorting
	for(int i=0;i<x-1;i++){
		for(int k=i+1;k<x;k++){
			if(arr[k]<arr[i]){
				int y=arr[k];
				arr[k]=arr[i];
				arr[i]=y;
			}
		}
		
	}
	cout<<"sorted elemnts are : ";
	for(int i=0;i<x;i++){
		cout<<arr[i]<<" ";
	}
	//second largest elemnt is 
	cout<<"second largest elemnt is "<<arr[x-2];;
	return 0;
}
