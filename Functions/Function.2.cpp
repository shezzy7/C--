#include <iostream>
using namespace std;
int sum(int b1,int b2){
	int sum=b1+b2;
	return sum;
}
int sum(int b1,int b2,int b3){
	int sum=b1+b2+b3;
	return sum;
}
float sum(float b1,float b2,float b3){
	float sum=b1+b2+b3;
	return sum;
}
int main(){

	float a1,a2,a3;
	cin>>a1>>a2>>a3;
	cout<<sum(a1,a2,a3);
	return 0;
}
