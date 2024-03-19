#include <iostream>
using namespace std;
void selectionSort(int n,int arr[]){
	
	for(int i=0;i<n-1;i++){
		//finding minimum element
		int min_idx=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min_idx]){
				min_idx=j;
			}
		}
		//putting minimum element at the beginning
		if(min_idx!=i){
		
		swap(arr[i],arr[min_idx]);
	}
	
	}
}
int main(){
	int n;
	cout<<"Enter size : ";
	cin>>n;
	int arr[n];
	cout<<"Enter elements of array : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	selectionSort(n,arr);
	cout<<"Elemnts after selection sort are :  ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
