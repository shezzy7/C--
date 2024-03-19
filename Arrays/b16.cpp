#include <iostream>
using namespace std;
//inputting array
void input(int n,int arr[]){
	cout<<"Enter values of array : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
}
//sorting
void sorting(int n,int arr[]){
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(arr[min]>arr[j]){
				min=j;
			}
		}
		if(min!=i){
			int temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		}
	}
}
//display after sorting
void display1(int n,int arr[]){
	cout<<"Elements after sorting: ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void search(int x,int n,int arr[]){
	int loc=-1,mid,start=0,end=n-1;
	

int main(){
	int n;
	cout<<"Enter size of array : ";
	cin>>n;
	int arr[n];
	input(n,arr);
	sorting(n,arr);
	display1(n,arr);
	int x;
	cout<<"Enter your required no : ";
	cin>>x;
	search(x,n,arr);
	cout<<"Program has been ended";
}
