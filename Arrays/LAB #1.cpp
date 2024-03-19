#include <iostream>
using namespace std;
int main(){
	int arr[10];
	//part a
	cout<<"enter values of arr \n";
	for(int i=0; i<10;i++){
		cin>>arr[i];
	}
	//part b
	cout<<"These are the values of arr \n";
	for(int i=0; i<10; i++){
		cout<<arr[i]<<endl;
	}
	//part c
	cout<<"Reverse order of arr is \n";
	for(int i=9; i>=0;i--){
		cout<<arr[i]<<endl;
	}
	//part d
	int brr[10];
	cout<<"value of brr after copying from arr \n";
	for(int i=0; i<10; i++){
		brr[i]=arr[i];
		cout<<brr[i]<<endl;
	}
	//part e
	int crr[10];
	cout<<"value of crr(sum of arr and brr)\n";
	for(int i=0;i<10;i++){
		crr[i]=arr[i]+brr[i];
		cout<<crr[i]<<endl;
			}
	//part f
	int drr[10];
	cout<<"value of drr (reverse order of arr \n";
		for(int i=9; i>=0; i--){
			drr[i]=arr[i];
			cout<<drr[i]<<endl;
			
		}
	
	return 0;
}
