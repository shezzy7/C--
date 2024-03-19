#include <iostream>
using namespace std;
int main(){
	int arr[5]={15,5,20,10,12};
	int x;
	for(int i=0;i<5;i++){
		int min=arr[i];
		for(int j=i+1;j<5;j++){
			if(min>arr[j]){
				min=arr[j];
				 x=j;
			}
		}
		swap(arr[x],arr[i]);
	}
	cout<<"Elements after selection sort : ";
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
	
