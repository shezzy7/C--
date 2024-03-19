#include <iostream>
#include <vector>
using namespace std;
void bubleSort(vector<int>&v){
	int n=v.size();
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(v[j]>v[j+1]){
				swap(v[j],v[j+1]);
			}
		}
	}
	return;
}

int main(){
	int n;
	cout<<"enter size of array : ";
	cin>>n;
	vector<int>v(n);
	cout<<"enter elements of array : ";
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	bubleSort(v);
	cout<<"\nelemnts in sorted form are : ";
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	return 0;
}
