#include <iostream>
using namespace std;
int main(){
	int arr[]={-2,-3,-4,-5,-6,-7,-8,-9,-1,-15,-16,-18,-19,-25};
	int size=sizeof(arr)/sizeof(arr[0]);
	int max=INT_MIN;
	int x=0;
	for(int i=0;i<size;i++){
		if(arr[i]>max){
			max=arr[i];
			x=i;
		}
	}
	arr[x]=-1;
	int maxi=INT_MIN;
	for(int i=0;i<size;i++){
		if(arr[i]>maxi){
			maxi=arr[i];
		}	
	}
	cout<<"second largest no in array is : "<<maxi;
	return 0;
}
