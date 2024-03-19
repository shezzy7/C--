#include <iostream>
using namespace std;
int main(){
	int arr[10];
	for(int i=0;i<10;i++){
		cin>>arr[i];
	}
	int brr[10];
	for(int i=9; i>=0;i--){
		
			brr[i]=arr[i];
	}
	for(int i=0;i<10;i++){
		cout<<brr[i]<<endl;
	}
	return 0;
}
