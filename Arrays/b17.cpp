#include <iostream>
using namespace std;
int main(){
	int arr[2][4];
	cout<<"Enter values : ";
	for(int i=0;i<2;i++){
		for(int j=0;j<4;j++){
			cin>>arr[i][j];
		}
	}
	cout<<"Values are \n";
	for(int i=0;i<2;i++){
		for(int j=0;j<4;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	int min=arr[0][0];
	//finding minimum no
	for(int i=0;i<2;i++){
		for(int j=0;j<4;j++){
			if(arr[i][j]<min){
				swap(min,arr[i][j]);
			}
		}
	}
	//finding max no
	int max=arr[0][0];
	for(int i=0;i<2;i++){
		for(int j=0;j<4;j++){
			if(arr[i][j]>max){
				swap(arr[i][j],max);
			}
		}
	}
	cout<<"Minimum value is : "<<min<<endl;
	cout<<"Maximum value is : "<<max<<endl;
}
