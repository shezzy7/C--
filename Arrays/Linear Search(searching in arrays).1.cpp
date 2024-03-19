#include <iostream>
using namespace std;
int linearSearch(int arr[],int key){
		for(int i=0;i<2;i++){
		if(arr[i]==key){
			return i;
		}
	}
	return -1;
}
int main(){
	int arr[2]={12,13};
	for(int i=0;i<2;i++){
		cin>>arr[i];
	} 
	int key;
	cin>>key;
cout<<linearSearch(arr,key);
	
	return 0;
}

