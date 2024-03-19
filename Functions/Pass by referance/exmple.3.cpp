#include <iostream>
using namespace std;
void print(int &a,int &b){  // "&" is known as ampersend operator

	a=50;
	b=100;
}
int main(){
	int x=10;
	int y=20;
	cout<<x+y<<endl;
	
	print(x,y); 
	cout<<x+y<<endl;
	return 0;
}
	
