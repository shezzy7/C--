#include <iostream>
using namespace std;
int main(){
	int i=1,j=2,k=3;
	
		 //1 //2 //3  //1   //2   //2   //4   //3
	int l=i + j + k + i++ - i++ - j-- + ++k - i--;
		//2		//1		//4		//4
	cout<<i<<" "<<j<<" "<<k<<" "<<l<<endl;
	
	
	return 0;
}
