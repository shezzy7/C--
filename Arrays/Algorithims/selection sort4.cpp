#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	cout<<" enter sixe : ";
	cin>>n;
	vector<int>v(n);
	cout<<"enter elemnts : ";
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	for(int i=0;i<n-1;i++){
		int idx=i;
		for(int j=i+1;j<n;j++){
			if(v[j]<v[idx]){
				idx=j;
			}
		}
		if(idx!=i){
			swap(v[i],v[idx]);
		}
	}
	cout<<"Elements after sorting : ";
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	return 0;
}
