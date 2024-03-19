#include <iostream>
using namespace std;
int main(){
	//Finding sum of diaogonal elements of a 2d array
	int arr[20][20];
	cout<<"enter elements of array : ";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>arr[i][j];
			
		}
	}
	int sum=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i==j){
				sum=sum+arr[i][j];
			}
		}
	}
	cout<<"Sum of diagonal element is : "<<sum;
}
