#include <iostream>
#include <vector>
using namespace std;
void getValue(int n,vector<int>&v){
	cout<<"Enter values of vector : ";
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
}
void bubbleSort(int n,vector<int>&v){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){
			if(v[j]>v[j+1]){
				swap(v[j],v[j+1]);
			}
		}
	}
}
void giveValue(int n,vector<int>&v){
	cout<<"\nValues of vector after bubble sort : ";
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
}
int main(){
	int n;
	cout<<"Enter size  : ";
	cin>>n;
	vector<int>v(n);
	getValue(n,v);
	bubbleSort(n,v);
	giveValue(n,v);
	return 0;
	
}
