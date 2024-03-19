#include <iostream>
#include <vector>
using namespace std;
void bSort(int n,vector<int>&v){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){
			if(v[j]>v[j+1]){
				swap(v[j],v[j+1]);
			}
		}
	}
}
int main(){
	int n;
	cout<<"Enter size : ";
	cin>>n;
	vector<int>v(n);
	cout<<"Enter elements of vector : ";
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	bSort(n,v);
	cout<<"The values of array after sorting are : ";
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	return 0;
}
