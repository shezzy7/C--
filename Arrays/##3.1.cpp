#include <iostream>
using namespace std;
int main(){
	int arr[4][2];
	cout<<"enter age and marks of each student respectively : "<<endl;
	cout<<"age\tmarks"<<endl;
	for(int i=0;i<4;i++){
		for(int j=0;j<2;j++){
			cin>>arr[i][j];
		}
	}
	cout<<"age\tmarks"<<endl;
	for(int i=0;i<4;i++){
		for(int j=0;j<2;j++){
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}

