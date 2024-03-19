#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter size of array : ";
	cin>>n;
	
	int arr[n];
	cout<<"Enter elemnts of array : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int key;
	cout<<"Enter element to find its index : ";
	cin>>key;
	int idx=n+1;
	for(int i=0;i<n;i++){
		if(key==arr[i]){
			idx=i;
			
		}
	}
	if(idx!=n+1){
		cout<<"elemnt is present at index no : "<<idx;
	}
	else {
		cout<<"Elemnt is not present in array";
	}
	return 0;
}
