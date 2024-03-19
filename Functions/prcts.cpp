#include <iostream>
using namespace std;
void input(int arr[],int size){
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
}

int main(){
	int arr[10];
	input(arr,10);
	for(int i=0;i<10;i++){
		cout<<arr[i];
	}
	return 0;
}
