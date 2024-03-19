#include <iostream>
using namespace std;
void sorting(int br[],int x){
	for(int i=0;i<x-1;i++){
		for(int j=i+1;j<x;j++){
		if(br[j]<br[i]){
			int temp=br[j];
			br[j]=br[i];
			temp=br[i];
		}
	}
}
}
void show(int arr[],int a){
	cout<<"elemnts in sorted order : ";
	for(int i=0;i<a;i++){
		cout<<arr[i]<<" ";
	}
}
void square(int arr[],int z){
	cout<<"square of each elemnt is : ";
	for(int i=0;i<z;i++){
		cout<<arr[i]*arr[i];
		}
}
int main(){
	int a;
	cout<<"enter size : ";
	cin>>a;
	int arr[a];
	cout<<"enter elemnts of array : ";
	for(int i=0;i<a;i++){
		cin>>arr[i];
	}
	cout<<endl;
	
	sorting(arr,a);
	show(arr,a);
	square(arr,a);
	
	
	
	return 0;
}
