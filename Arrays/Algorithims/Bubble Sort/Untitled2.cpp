#include <iostream>
#include <vector>
using namespace std;
void getValue(int n,vector<int>&v){
	cout<<"enter values of array : ";
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
}
void bubbleSort(int n,vector<int>&v){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(v[j]>v[j+1]){
				swap(v[j],v[j+1]);
			}
		}
	}
}
int main(){
	int n;
	cout<<"Enter size of Array : ";
	cin>>n;
	vector<int>v(n);
	getValue(n,v);
	bubbleSort(n,v);
	cout<<"Elemnts in arranged order are : ";
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	return 0;
	
	
}
