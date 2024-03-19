#include <iostream>
using namespace std;
int main(){//initialize a 2D array print it on screen
	int arr[3][3]={1,2,3,4,5,6,7,8,9};
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<endl;
		}
	}
	return 0;
}
