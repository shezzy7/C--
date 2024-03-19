#include <iostream>
using namespace std;
int main(){
	int arr[5];
	cout<<"Enter your numbers : ";
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	cout<<"Reverse order is : ";
	for(int i=4;i>=0;i--){
		cout<<arr[i]<<" ";
	}
}
