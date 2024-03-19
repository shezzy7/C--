#include <iostream>
#include <vector>
using namespace std;
void getValue(int n,vector<int>&v){
	cout<<"Enter elements : ";
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
void giveValue(int n,vector<int>v){
	cout<<"elements in sorted form are : ";
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
}

int main(){
	int n;
	cout<<"Enter size of vector : ";
	cin>>n;
	vector<int>v(n);
	getValue(n,v);
	bubbleSort(n,v);
	giveValue(n,v);
	
	
	
	return 0;
	
	
}
