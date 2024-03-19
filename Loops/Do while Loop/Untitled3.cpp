#include <iostream>
using namespace std;
int main(){
	int n;
	int sum=0;
	do{
		cout<<"Enter number(Enter 0 to exit) : \n";
		cin>>n;
		sum=sum+n;
	
		
	}while(n!=0);
		cout<<"Sum is : "<<sum<<endl;;
	cout<<"Program has been ended";
	return 0;
}
