#include <iostream>
using namespace std;
int main(){
	int b=1;
	do{
		int a=1;
		do{
			cout<<b<<"\n";
			a++;
		}while(a<=3);
		b++;
	}while(b<=3);
	return 0;
}
