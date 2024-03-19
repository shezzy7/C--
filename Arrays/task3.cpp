#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter size : ";
	cin>>n;
	int arr[n];
	cout<<" enter elemnts : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	//sorting
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[i]){
			
			int temp=arr[j];
			arr[j]=arr[i];
			arr[i]=temp;
			}
		}
	}
	cout<<"elemnts in sorted form : ";
	for(int i=0;i<6;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	//making squares f elemnts
	int brr[n];
	for(int i=0;i<n;i++){
		brr[i]=arr[i]*arr[i];
	}
	cout<<"squares of elements in current  order : ";
	for(int i=0;i<n;i++){
		cout<<brr[i]<<" ";
	}
	cout<<endl;
	//sorting squares of elements in non decreasing order
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(brr[j]<brr[i]){
			
			int temp=brr[j];
			brr[j]=brr[i];
			brr[i]=temp;
			}
		}
	}
	//displayin squares
	cout<<"squares of elements in non decreasing order : ";
	for(int i=0;i<n;i++){
		cout<<brr[i]<<" ";
	}
	return 0;
	} 
