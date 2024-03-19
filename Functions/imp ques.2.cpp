#include <iostream>
using namespace std;
void input(int &a,int &w,int &x,int &y,int &z){
	cout<<"enter values of a,w,x,y,z respectively : ";
	cin>>a>>w>>x>>y>>z;
}
void output(int a,int w,int x,int y,int z){
	cout<<"x1 : "<<a<<" w : "<<w<<" x : "<<x<<" y : "<<y<<" z : "<<z;
}
void sum(int a,int w,int x,int y,int z){
	cout<<"\nsum is : "<<a+w+x+y+z;
}
void incr(int &a,int &w,int &x,int &y,int &z){
	a+=2;
	x+=2;
	y+=2;
	z+=2;
	w+=2;
}
void output2(int a,int w,int x,int y,int z){
	cout<<" x1 :"<<a;
	cout<<" w : "<<w;
	cout<<" x : "<<x;
	cout<<" y :"<<y;
	cout<<" z :"<<z<<endl;
}
int  sum2(int a,int w,int x,int y,int z){
	int sum=a+w+x+y+z;
	return sum;
}
int w;
int x;
int main(){
	int x,y,z;
	//taking input through function
	input(::x,w,x,y,z);
	//giving output through function
	output(::x,w,x,y,z);
	//showing their sum through function
	sum(::x,w,x,y,z);
	//increase every integar by 2
	incr(::x,w,x,y,z);
	//showing values of elements after increment
	output2(::x,w,x,y,z);
	//showing sum after increment through return by function
	cout<<"sum after increment is : "<<sum2(::x,w,x,y,z);
	return 0;
}
