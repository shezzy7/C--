#include <iostream>
using namespace std;
void input(int arr[],int size){
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
}
int output(int arr[],int size){
	int min=arr[0];
	for(int i=0;i<size;i++){
		if(min>arr[i]){
		min=arr[i];
		}
	}
	return min;
}
int main(){
	int arr[100];
	input(arr,100);
	cout<<"the minimum value in the array is : "<<output(arr,100);
	return 0;
}
