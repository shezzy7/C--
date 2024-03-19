#include <iostream>
#include <stdlib.h>
using namespace std;
void input(int ar[5][6]){
	
	for(int i=0;i<5;i++){
		for(int j=0;j<6;j++){
			ar[i][j]=rand()%50;
		}
	}
	
}
void output(int arr[5][6]){
	cout<<"elemnts assogned to array are "<<endl;
	for(int i=0;i<5;i++){
		for(int j=0;j<6;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
void max(int arr[5][6]){
	int max,min=arr[0][0];
	for(int i=0;i<5;i++){
		for(int j=0;j<6;j++){
			if(max<arr[i][j]){
				max=arr[i][j];
			}
		
		if(min>arr[i][j]){
			
			min=arr[i][j];
		}
	}
	}
	cout<<"maximum values in the array are : ";
	cout<<max;
	cout<<"\n minimum value in the array is : "<<min;
}
int main(){
	int arr[5][6];
	input(arr);
	output(arr);
	max(arr);
	
	return 0;
}
