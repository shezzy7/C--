#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int pdct=1;
	for(int i=1;i<=n;i++){
		pdct=pdct*i;
	}
	cout<<"Factorial is : "<<pdct;
}
