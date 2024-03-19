#include <iostream>
using namespace std;
int main(){
	int arr[]={1,2,3,4,2,3,5,6,1,2,3,4};
	int sum;
	cout<<"enter sum : ";
	cin>>sum;
	int triplets=0;
	int size=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			for(int k=j+1;k<size;k++){
			
				if(arr[i]+arr[j]+arr[k]==sum){
				triplets++;
				}
			}
		}
	}
	cout<<"number of pairs making sum equal to "<<sum<<" are "<<triplets;
	return 0;
}
