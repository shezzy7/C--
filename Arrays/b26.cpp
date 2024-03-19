#include <iostream>
using namespace std;
int main(){
	//input 10 number then tell the no occurence of each no in array
	int arr[10];
	cout<<"enter 10 numbers : ";
	for(int i=0;i<10;i++){
		cin>>arr[i];
	}
	int count=1;
	for(int i=0;i<9;i++){
		for(int j=i+1;j<10;j++){
			if(arr[i]==arr[j]){
				count++;
			}
		}
		cout<<arr[i]<<" is present "<<count<<" times in array\n";
		count=1;
	}
}
