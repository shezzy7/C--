#include <iostream>
using namespace std;\
void print(int y);
void prints(int a);
int u=10;
int main(){
	
	int x;
	int u;
	cout<<"enter x,u \n";
	cin>>x;
	cin>>u;
	int z=x+u+::u;
	if(z<=29){
		print(::u);
	}
	else if(z>36){
		prints(u);
	}
	else
	cout<<"unable to process \n";
	return 0;
	
}
void print(int y){
	int x=6;
	int f=x+y;
	if(f>18)
	cout<<"Allah is my hope \n";
	else 
	cout<<"Allah is my last hope";
}
void prints(int a){
	int x=6;
	int f=a+x;
	if(f>29)
	cout<<"I love Allah and Muhammad \n";
	else
	cout<<"My heart is in love with allah and muhammad";
}
