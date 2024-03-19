#include <iostream>
using namespace std;
int main(){
	int arr[]={2,5,6,8,9,4,5,6};
	int max=arr[0];
	int min=arr[1];
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
		if(max<arr[i]){
			max=arr[i];
		}
		else if(min>arr[i]){
			min=arr[i];
			
		}
		
	}
	cout<<"maximum no : "<<max<<endl;
	cout<<"minimum no : "<<min;
	return 0;
}
