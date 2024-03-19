#include <iostream>
using namespace std;
int main(){
	int arr[2][3];
	cout<<"enter rows and columns respectively :  ";
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cin>>arr[i][j];
		}
	}
	cout<<"elemnts are \n";
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
