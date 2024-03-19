#include <iostream>
using namespace std;
int main(){
	
	int arr[]={1,0,0,0,1,1,0};
	for(int i=0;i<6;i++){
		for(int j=i+1;i<7;j++)
		if(arr[j]<arr[i]){
		
{
	int temp=arr[j];
	arr[j]=arr[i];
	arr[i]=temp;
	}
	
	}
		
			}
	cout<<"sorted form is : ";
	for(int i=0;i<7;i++){
		cout<<arr[i]<<"  ";
	}
	return 0;
}
