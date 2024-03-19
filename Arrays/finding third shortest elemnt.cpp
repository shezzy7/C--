#include <iostream>
using namespace std;
int main(){
	int size;
	cout<<" enter size : ";
	cin>>size;
	int arr[size];
	cout<<"enter elemnts : ";
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	//sorting 
	for(int i=0;i<size-1;i++){
		for(int j=i+1;i<size;j++){
			if(arr[j]<arr[i]){
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}	
		}
	}
	cout<<"third largest element is : "<<arr[2];
	return 0;
}
