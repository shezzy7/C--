#include <iostream>
using namespace std;
int linearsearch(int arr[],int n,int key){
	for(int i=0;i<n;i++){
		if(arr[i]==key){
			return i;
		}
	}
	return -1;
}

int main(){
	int n;
	cout<<"enter size \n";
	cin>>n;
	int arr[n];
	cout<<"enter values \n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int key;
	cout<<"enter key \n";
	cin>>key;
	cout<<linearsearch(arr,n,key);
	
	return 0;
}
