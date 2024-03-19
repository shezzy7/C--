#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter size of aray : ";
	cin>>n;
	int arr[n];
	cout<<"Enter elemnt of array : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int key;
	cout<<"Enter elemnt which we have to check whether it is present or not : ";
	cin>>key;
	int k=0;
	for(int i=0;i<n;i++){
		if(key==arr[i]){
			cout<<"Given ELement is present in array at "<<i<<" idices";
			k=1;
		}
	}
	if(k==0){
		cout<<"Element is not present in the array";
	}
	
	return 0;
}
