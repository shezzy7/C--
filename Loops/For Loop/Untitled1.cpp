#include <iostream>
using namespace std;
int main(){
	int i=1,j=2,k=3;
	int l=i+j+k+ i++ - i++ - j-- + ++k - i--;
	
	cout<<i<<" "<<j<<" "<<k<<" "<<l<<endl;
	
	
	return 0;
}
