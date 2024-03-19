#include <iostream>
using namespace std;

int main(){
	int x;
	cin>>x;
	for(int i=2;i<x;i++){
		if(x%i!=0){
			cout<"nmbr is prime";
			break;
		}
		else {
			cout<<"nbmr is not prime";
		}
		}
	
	
	return 0;
}	

