#include <iostream>
using namespace std;
int main(){
	int x;
	while(true){
	cout<<"enter number"<<endl;
	cin>>x;
	int i;
	for( i=2;i<x;i++){
	
	if(x%i==0){
		cout<<"non prime \n";
		break;
	}}
	
	if(i==x)
	cout<<"prime"<<endl;
	}
	return 0;
}
