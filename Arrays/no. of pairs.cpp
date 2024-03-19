#include <iostream>
using namespace std;
int main(){
	int arr[]={2,3,4,5,2,4,5};
	int sum;
	cout<<"enter sum : ";
	cin>>sum;
	int pair=0;
	int size=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(arr[i]+arr[j]==sum){
				pair++;
			}
		}
	}
	cout<<"number of pairs making sum equal to "<<sum<<" are "<<pair;
	return 0;
}
