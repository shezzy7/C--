#include <iostream>
using namespace std;

int  main(){
	int x;
	cout<<"enter size : ";
	cin>>x;
	int arr[x];
	cout<<"enter elemnts\n";
	for(int i=0;i<x;i++){
		cin>>arr[i];
	}
	//sorting
	for(int i=0;i<x-1;i++){
		for(int j=i+1;j<x;j++){
			if(arr[j]<arr[i]){
				int temp=arr[j];
				arr[j]=arr[i];;
				arr[i]=temp;
			}
		}
	}
	cout<<"sorted form is : ";
	for(int i=0;i<x;i++){
		cout<<arr[i]<<" ";
	}
return 0;	
	
	
}
