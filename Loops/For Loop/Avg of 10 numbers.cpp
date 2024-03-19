#include <iostream>
using namespace std;
int main(){
	int a;
	int sum=0;
	for(int i=1;i<=10;i++){
		cin>>a;
		sum=sum+a;
	}
	float avg=sum/10;
	cout<<avg;
	return 0;
}
