#include<iostream>
using namespace std;
int linear(int key,int arr[]){
	for(int i=0;i<5;i++){
		if(arr[i]==key){
			return i;
		}
	}
	return -1;
}
int main(){
	int arr[5]={12,13,14,15,16};
	int key;
	cin>>key;
	cout<<linear(key,arr
	);
	
}
