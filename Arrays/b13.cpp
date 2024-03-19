#include <iostream>
using namespace std;
int main(){
	int arr[10];
	cout<<"Enter your numbers : ";
	for(int i=0;i<10;i++){
		cin>>arr[i];
	}
	int min=arr[0];
	for(int i=0;i<10;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	cout<<"Minimum no is : "<<min;
}
