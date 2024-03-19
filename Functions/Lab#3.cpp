#include <iostream>
using namespace std;
int min(int a,int b,int c){
	if(a<b&&a<c){
		return a;
	}
	else if(b<a&&b<c){
		return b;
	}
	else{
		return c;
	}
}
int main(){
	int x,y,z;
	cout<<"enter x,y,z respectively\n";
	cin>>x;
	cin>>y;
	cin>>z;
	cout<<"the minimum number is\n"<<min(x,y,z);
	return 0;
}
