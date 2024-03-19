#include <iostream>
using namespace std;
int sum(int a1,int a2){
	int sum=a1+a2;
	return sum;
}
int sum(int b1,int b2,int b3){
	int sum=b1+b2+b3;
	return sum;;
}
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	cout<<sum(a,b);
	return 0;
}
