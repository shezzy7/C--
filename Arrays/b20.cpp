#include <iostream>
using namespace std;
void func(int arr[r][c]){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
	
int main(){
	
	const int r=2;
	const int c=2;
	int arr[r][c]={{2,3},{4,5}};
	func(arr);
}
