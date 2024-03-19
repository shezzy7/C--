#include<iostream>
using namespace std;
int main(){
	//input 10 floating numbers 
	//get their average
	//print the numbers of array which are greater then avg of array 
	float arr[10];
	int sum=0;
	cout<<"Enter 10 point numbers : ";
	for(int i=0;i<10;i++){
		cin>>arr[i];
		sum=sum+arr[i];
	}
	float avg=sum/10.0;
	cout<<"Values in array which are greator then avg of array are following\n";
	for(int i=0;i<10;i++){
		if(avg<arr[i]){
			cout<<arr[i]<<" ";
		}
	}
}
