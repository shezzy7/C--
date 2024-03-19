#include <iostream>
using namespace std;
void print(int n,int y){
	cout<<n<<endl;
	n=100;
	cout<<n+y<<endl;
}
int y=10;

int main(){
	int x=5;
	print(x,y);
	cout<<x;
	return 0;
}
