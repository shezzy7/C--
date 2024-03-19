#include <iostream>
using namespace std;\
void print(){
	cout<<"Allah is my hope \n";
}
void prints(){
	cout<<"I love Allah and Muhammad \n";
}
int u=10;
int main(){
	int x;
	int y;
	cout<<"enter x,y \n";
	cin>>x;
	cin>>y;
	int z=x+y+u;
	if(z<=29){
		print();
	}
	else if(z>36){
		prints();
	}
	else
	cout<<"unable to process \n";
	return 0;
	
}
