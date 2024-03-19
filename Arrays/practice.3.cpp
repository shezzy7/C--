#include <iostream>
using namespace std;
int main(){
	int a;
	cout<<"enter size : ";
	cin>>a;
	int arr[a];
	cout<<"enter numbers : ";
	for(int i=0;i<a;i++){
		cin>>arr[i];
	}
	for(int i=0;i<a-1;i++){
		for(int j=i+1;j<a;j++){
			if(arr[j]%2==0){
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	cout<<"result : ";
	for(int i=0;i<a;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
