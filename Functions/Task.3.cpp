#include <iostream>
using namespace std;
float area(int r){
	float A=3.14*r;
	return A;
}
float circm(int r){
	float C=2*3.14*r;
	return C;
}
int main(){
	int r;
	cin>>r;
	cout<<area(r)<<endl;
	cout<<circm(r);
	
	return 0;
}
