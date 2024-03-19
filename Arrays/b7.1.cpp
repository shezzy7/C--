#include <iostream>
using namespace std;
int main(){
	int arr[5];
	for(int i=0;i<5;i++){
		cin>>arr[i];
//	cout<<arr[i]<<" ";
	}
	float avg;int sum=0;
	for(int i=0;i<5;i++){
		sum=sum+arr[i];
	}
	avg=sum/5.0;
	cout<<"Sum of these values is : "<<sum<<"\nAverage of these values is : "<<avg;
}
