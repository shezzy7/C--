#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	float arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	float maxNo=INT_MIN;
	float minNo=INT_MAX;
	for(int i=0;i<n;i++){
		maxNo=max(maxNo,arr[i]);
		minNo=min(minNo,arr[i]);
	}
	cout<<maxNo<<"\n"<<minNo;
	
	return 0;
}
