#include <iostream>
using namespace std;
void  largest(int arr[],int n){
	int largest = INT_MIN;
	int idx;
	for(int i=0;i<n;i++){
		if(arr[i]>largest){
			largest = arr[i];
			idx=i;
		}
	}
	arr[idx]=-1;
}
int tLargest(int arr[],int n){
	int largest = INT_MIN;
	int idx;
	for(int i=0;i<n;i++){
		if(arr[i]>largest){
			largest = arr[i];
			
		}
	}
	return largest;
}
int main(){
	int n;
	cout<<"Enter size of array : ";
	cin>>n;
	int arr[n];
	cout<<"Enter elements of array\n ";
	for(int i=0;i<n;i++){
		cout<<"Enter element "<<i+1<<" : ";
		cin>>arr[i];
	}
	int num;
	cout<<"Which largest element you want to find (1st,2nd,3r....) : ";
	cin>>num;
	for(int i=1;i<num;i++){
	largest(arr,n);
	}
	int third = tLargest(arr,n);
	cout<<"Our third largest element is "<<third<<endl;
}
