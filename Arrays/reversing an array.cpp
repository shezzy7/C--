#include <iostream>
using namespace std;
int main(){
	int arr[5]={1,2,3,4,5};
	int sum=0;
	int prdct=1;
	
	for(int i=0;i<5;i++){
		sum+=arr[i];
	}
	
	for(int i=0;i<5;i++){
		prdct*=arr[i];
	}
	cout<<"sum : "<<sum<<endl;
	cout<<"product : "<<prdct<<endl;
	return 0;
}
