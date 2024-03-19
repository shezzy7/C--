#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;
	cout<<"Enter array size : ";
	cin>>n;
	vector<int>v(n);
	cout<<"Enter elemnts of array : ";
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(v[i]==v[j]){
			v[i]=v[j]=-1;
							
				}
		}
	}
	cout<<"The umique element in the array : ";
	for(int i=0;i<v.size();i++){
		if(v[i]!=-1){
		
			cout<<v[i];
}
	}
return 0;
}
