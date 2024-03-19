#include <iostream>
using namespace std;
int main(){
	
	int arr[]={1,0,0,0,1,1,0};
	int x=0;
	for(int i=0;i<7;i++){
		if(arr[i]==0){
			x++;
		}
		
	}
	for(int i=0;i<x;i++){
		arr[i]=0;
	}
	for(int i=x;i<7;i++){
		arr[i]=1;
			}
			cout<<"sorted form is : ";
	for(int i=0;i<7;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
