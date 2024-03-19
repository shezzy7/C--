#include <iostream>
using namespace std;
int print(int a,int b=2,int c=4){
	return(a+b+c);
}
int main(){
	cout<<print(3)<<endl;
	cout<<print(3,5)<<endl;
	cout<<print(3,5,6)<<endl;
	return 0;
}
