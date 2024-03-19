#include<iostream>
using namespace std;
int abc(int a, int b, int c){
	if(a<b&&b<c){
		return a;
	}
	else if(a>b&&b<c){
		return b;
	}
	else{
		return c;
	}
}
int main(){
	cout<<"enter any 3 numbers respectively\n";
	int x,y,z;
	cin>>x>>y>>z;
	cout<<"the minimum number is   "<<abc(x,y,z);
	return 0;
}
