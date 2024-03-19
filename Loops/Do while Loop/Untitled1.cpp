#include <iostream>
using namespace std;
int main(){
	int money=900;
	for(int i=1;  i<=15; i++){
	
	if(i%2==0){
		continue;
	}
	 if(money==0){
		break;
	}
	
	cout<<i<<endl;
	money=money-100;
	}
	return 0;
}
