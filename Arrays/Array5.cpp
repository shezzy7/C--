#include <iostream>
using namespace std;

int main(){
	int arr[10];
	for(int i=0;i<10;i++){
		cin>>arr[i];
	}
	int num;
	cout<<" enter number \n";
	cin>>num;
	bool flag=false;
	for(int i=0;i<10;i++){
		if(num==arr[i]){
			flag=true;
			break;
		}
	}
	if(flag){
		cout<<"nmber is present"<<endl;;
	}
	else{
		cout<<" nmber is not present";
	}
	
	return 0;
}
