#include <iostream>
using namespace std;
int main(){
	int arr[]={10,30,0,50,60,40,95,42,001,65};
	int req;
	cout<<"Enter required no : ";
	cin>>req;
	int x=0;
	for(int i=0;i<10;i++){
		if(arr[i]==req){
		
		cout<<"Required no is present at "<<i<<endl;
		x=1;
	}
	}
	if(x==0){
		cout<<"Number is not present in array "<<endl;
		
		
	}
}
