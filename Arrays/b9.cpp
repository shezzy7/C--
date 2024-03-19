#include <iostream>
using namespace std;
int main(){
	int arr[6];
	cout<<"Enter ages : ";
	for(int i=0;i<6;i++){
		cin>>arr[i];
	}
	int count=0;
	for(int i=0;i<6;i++){
		if(arr[i]>=50 && arr[i]<=60){
			count++;
		}
	}
	cout<<"No of person ages b\w 50-60 is : "<<count;
	
}
