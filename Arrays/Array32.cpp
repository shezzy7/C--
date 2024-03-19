#include <iostream>
using namespace std;
int main(){
	int arr[3];
	for(int i=0;i<3;i++){
		cin>>arr[i];
	}
	int prdct=1;
	int sum=0;
	for(int i=0;i<3;i++){
		prdct=prdct*arr[i];
		sum=sum+arr[i];
	}
	cout<<prdct<<" "<<sum;
	return 0;
}
