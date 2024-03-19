#include <iostream>
using namespace std;
void status(int age){
	if(age>=18){
		cout<<"he/she is eligible to cast vote";
	}
	else {
		cout<<"he is not eligible to vote";
	}
}
int main(){
	int age;
	cin>>age;
	status(age);
	return 0;
}
