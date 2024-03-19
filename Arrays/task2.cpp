#include <iostream>
using namespace std;
int main(){
	int arr[]={5,3,-6,40,56,-3};
	for(int i=0;i<5;i++){
		for(int j=i+1;j<6;j++){
			if(arr[j]<arr[i]){
				int tem=arr[j];
				arr[j]=arr[i];
				arr[i]=tem;
			}
		}
	}
	cout<<"elements in sorted form are: ";
	
	for(int i=0;i<6;i++){
		cout<<arr[i]<<" ";
	}
	int brr[6];
	for(int i=0;i<6;i++){
		brr[i]=arr[i]*arr[i];
	}
	cout<<"square of elemnts in unsorted form : ";
	for(int i=0;i<6;i++){
		cout<<brr[i]<<" ";
	}
	for(int i=0;i<5;i++){
		for(int j=i+1;j<6;j++){
			if(brr[j]<brr[i]){
				int temp=brr[j];
				brr[j]=brr[i];
				brr[i]=temp;
			}
		}
	}
	cout<<" squares of elements in sorted form : ";
	for(int i=0;i<6;i++){
		cout<<brr[i]<<" ";
	}
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

