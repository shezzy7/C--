#include <iostream>
using namespace std;
void input(int *num1,int *num2,int *num3){
	cout<<"enter num1,num2,num3 respectivelt : ";
	cin>>*num1>>*num2>>*num3;
}
void output(int num1,int num2,int num3){
	cout<<"x : "<<num1<<endl;
	cout<<"y : "<<num2<<endl;
	cout<<"z : "<<num3<<endl;
}
void sum(int num1,int num2,int num3){
	cout<<"sum is : "<<num1+num2+num3<<endl;
}
void incre(int *a,int *b,int *c ){
	*a+=2;
	*b+=2;
	*c+=2;
}
void output2(int x,int y,int z){
	cout<<"numbers after increment ";
	cout<<x<<endl;
	cout<<y<<endl;
	cout<<z<<endl;
}
int sum2(int a,int b,int c){
	int d=a+b+c;
	return d;
}
int main(){
	int x,y,z;
	input(&x,&y,&z);
	output(x,y,z); 
	sum(x,y,z);
	incre(&x,&y,&z);
	output2(x,y,z);
	cout<<"sum after increment : "<<sum2(x,y,z);
}
