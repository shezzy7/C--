#include <iostream>
using namespace std;
int main(){
	int arr[3];
	for(int i=0;i<3;i++){
		cin>>arr[i];
	}
	int sum=0;
	int prdct=1;
	for(int i=0;i<3;i++){
		sum+=arr[i];
	}
	cout<<sum<<endl;
	for(int i=0;i<3;i++){
		prdct*=arr[i];
	}
	cout<<prdct
	;
	return 0;
}
