#include <iostream>
using namespace std;
int main(){
	int x=10;
	int y=x;
	cout<<x<<endl;
	cout<<y<<endl;
	//location of x in memory
	cout<<&x<<endl;
	
	//location of y in memory
	cout<<&y<<endl;
	return 0;
}
