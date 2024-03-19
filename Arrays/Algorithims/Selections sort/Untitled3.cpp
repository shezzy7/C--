#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter size of array : ";
	cin>>n;
	int v[n];
	cout<<"Enter elements of array : ";
	for(int i=0;i<n;i++){
		cin>>v[i];
		
	}
	for(int i=0;i<n-1;i++){
		int min_idx=i;
		for(int j=i+1;j<n;j++){
			if(v[j]<v[min_idx]){
				min_idx=j;
			}
		}
		if(min_idx!=i){
			swap(v[i],v[min_idx]);
		}
	}
	cout<<"Array in sorted form through selection sort is : ";
	for(int k=0;k<n;k++){
		cout<<v[k]<<" ";
	}
	return 0;
}
