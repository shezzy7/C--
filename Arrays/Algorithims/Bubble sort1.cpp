#include <iostream>
#include <vector>
using namespace std;
void bubbleSort(int n,vector<int>&v){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){
			if(v[j]>v[j+1]){
				swap(v[j],v[j+1]);
			}
		}
	}
	return ;
}
int main(){
	int n;
	cout<<"enter size : ";
	cin>>n;
	vector<int>v(n);
	cout<<"Enter values of vector : ";
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	bubbleSort(n,v);
	cout<<"Values of array after sorting : ";
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	
}
