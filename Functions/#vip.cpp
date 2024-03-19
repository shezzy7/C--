#include <iostream>
#include <vector>
using namespace std;
void getARR(int n,int brr[]){//array don't need amperscend  for pass by reference
	cout<<"Enter elemnts of array : ";
	for(int i=0;i<n;i++){
		cin>>brr[i];
	}
}
void getVec(int n,vector<int>&c){//vector need amperscend for pass by reference
	cout<<"\nEnter values of vector : ";
	for(int i=0;i<n;i++){
		cin>>c[i];
	}
}
int main(){
	int arr[5];
	vector<int>v(5);
	getARR(5,arr);
	getVec(5,v);
	cout<<"Array : ";
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\nVector : ";
	for(int i=0;i<5;i++){
		cout<<v[i]<<" ";
	}
	return 0;
}
