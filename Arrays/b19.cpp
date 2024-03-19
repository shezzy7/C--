#include <iostream>
using namespace std;
void input(int arr[][c],int brr[r][c]){

	//inputting arr[]
	cout<<"Enter "<<r*c<< " Values  of array : ";
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>arr[i][j];
		}
	}
	//inputing brr[]
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>brr[i][j];
		}
	}
}
void add(int arr[][20],int brr[][20],int crr[][20]){
	//adding
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			crr[i][j]=arr[i][j]+brr[i][j];
		}
	}
}
void display(int crr[][20]){
	cout<<"The Array containing sum of first arrays is following\n";
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<crr[i][j]<<" ";
		}
		cout<<endl;
	}
}
	const int r=5; const int c=4;
//	cout<<"Enter no of rows : ";
//	cin>>r;
//	cout<<"Enter no of colomns : ";
//	cin>>c;
int main(){
	int arr[r][c],brr[r][c],crr[r][c];

	//function to take input
	input(arr,brr);
	//function to add sum of first two arrays in third
	add(arr,brr,crr);
	//displaying sum array
	dispaly(crr);
}
