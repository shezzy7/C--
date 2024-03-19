#include <iostream>
using namespace std;
int main(){
//	intialization
	int arr[9];
	for(int i=0;i<9;i++){
		cin>>arr[i];
	}
	//sorting in ascending order
	
	for(int i=0;i<8;i++){
		for(int j=i+1;j<9;j++){
			if(arr[j]<arr[i]){
			
			int temp=arr[j];
			arr[j]=arr[i];
			arr[i]=temp;
		}
		}
	}
	cout<<"sorted elements :  ";
	for(int i=0;i<9;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	//displaying 2nd largest element
	cout<<"second largest element is : "<<arr[1]<<endl;
	return 0;
}
