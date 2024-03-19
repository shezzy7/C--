#include <iostream>
using namespace std;
void print(int a,int b=2,int c=4){
	cout<<a+b+c<<endl;
}
int main(){
	print(3);
	print(3,5);
	print(3,5,6);
	return 0;
}
