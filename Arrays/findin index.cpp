#include <iostream>
using namespace std;
int  index(int size,int arr[],int num){
	for(int i=0;i<size;i++){
		if(arr[i]==num){
			return i;
		}
	}
	return -1;
}
int main(){
	int n;
	cout<<"enter size of  array : ";
	cin>>n;
	int arr[n];
	cout<<"enter values of array : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}int key;
	cout<<"enter nmbr to find index : ";
	cin>>key;
	cout<<index(n,arr,key);
//	for(int i=0;i<n;i++){
//		if(arr[i]==key){
//			cout<<"numbr "<<key<<" is present at index :"<<i;
//			break;
//		}
//	
//	}
	return 0;
}
