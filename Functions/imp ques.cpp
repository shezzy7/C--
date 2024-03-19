#include <iostream>
using namespace std;
void input(int w,int &x,int &y,int &z){
	cout<<"enter values of w,x,y,z respectively : ";
	cin>>w>>x>>y>>z;
}
void output(int w,int x,int y,int z){
	cout<<"w : "<<w<<" x : "<<x<<" y : "<<y<<" z : "<<z;
}
void sum(int w,int x,int y,int z){
	cout<<"\nsum is : "<<w+x+y+z;
}
void incr(int w,int &x,int &y,int &z){
	x+=2;
	y+=2;
	z+=2;
	w+=2;
}
void output2(int w,int x,int y,int z){
	cout<<" x : "<<x;
	cout<<" y :"<<y;
	cout<<" z :"<<z;
}
int  sum2(int w,int x,int y,int z){
	int sum=w+x+y+z;
	return sum;
}
int w;
int main(){
	int x,y,z;
	//taking input through function
	input(w,x,y,z);
	//giving output through function
	output(w,x,y,z);
	//showing their sum through function
	sum(w,x,y,z);
	//increase every integar by 2
	incr(w,x,y,z);
	//showing values of elements after increment
	output2(w,x,y,z);
	//showing sum after increment through return by function
	cout<<"sum after increment is : "<<sum2(w,x,y,z);
	return 0;
}
