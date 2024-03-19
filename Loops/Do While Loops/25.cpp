// An Unsigned char example
#include <iostream>
using namespace std;
int main()
{ 
	for(int day=1;day<=100;day++){
		if(day%3==0){
			continue;
		}
		cout<<day<<endl;
	}
	
    return 0;
}
