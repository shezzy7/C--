#include <iostream>
using namespace std;
int add();
int main(){
	int x;
	cin>>x;
	if(x==3){
		add();
	}
	else
	cout<<"invalid";
	return 0;
}
int add(){
	int y,z;
	cin>>y>>z;
	int c=y+z;
	cout<<c;
}
