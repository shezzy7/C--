#include <iostream>
using namespace std;
int main(){
	int arr[4][2];
	int x=1;
	for(int i=0;i<4;i++){
	cout<<"enter salary and age of student "<<x<<endl;
		
		for(int j=0;j<2;j++){
			
			cin>>arr[i][j];
		}x++;
	
	}
	cout<<"salary\tage\n";
	for(int i=0;i<4;i++ ){
		for(int j=0;j<2;j++){
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
		
	}
	return 0;
}
