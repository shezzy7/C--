#include <iostream>
using namespace std;
void input(int &a,int &b,int &c){
	cout<<"enter a b c"<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	
}
void output(int a,int b,int c){
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
}
float avg(int a,int b,int c){
	float avg=(a+b+c)/3.0;
	return avg;
}
int main(){
	int a,b,c;
	input(a,b,c);
	output(a,b,c);
	float average=avg(a,b,c);
	cout<<average;
	return 0;
	
	
}
