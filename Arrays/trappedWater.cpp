#include <iostream>
using namespace std;
void waterFall(int arr[]){
	cout<<sizeof(arr)<<endl;
	int n=5;
	int sum = 0;
	int leftSide[n];
	int rightSide[n];
	leftSide[0]=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]>leftSide[i-1]){
			leftSide[i]=arr[i];
		}
		else{
			leftSide[i]=leftSide[i-1];
		}
	}
	for(int i=0;i<n;i++){
		cout<<leftSide[i]<<" ";
	}
	cout<<"\n";
	rightSide[n-1]=arr[n-1];
	for(int i=n-2;i>=0;i--){
		if(arr[i]>rightSide[i+1]){
			rightSide[i]=arr[i];
		}
		else{
			rightSide[i]=rightSide[i+1];
		}
	}
	for(int i=0;i<n;i++){
		cout<<rightSide[i]<<" ";
	}
	cout<<"\n";
	int trappedWater=0;
	for(int i=0;i<n;i++){
		int wLevel =0;
		if(leftSide[i]>rightSide[i]){
			wLevel=rightSide[i];
		}
		else{
			wLevel = leftSide[i];
		}
		trappedWater = trappedWater + (wLevel-arr[i]);
	}
	cout<<"Traped water is = "<<trappedWater<<endl;
	
	
}
int main(){
	int arr[]={1,5,3,0,8};
	waterFall(arr);
}
