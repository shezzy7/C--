#include <iostream>
using namespace std;
int main(){
	int arr[5]={15,5,20,10,12};
	for(int i=0;i<4;i++){
		for(int j=i+1;j<5;j++){
			if(arr[j]<arr[i]){
				swap(arr[j],arr[i]);
			}
		}
	}
	cout<<"Array after sorting is : ";
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	
}
