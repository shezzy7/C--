#include<iostream>
using namespace std;
void print(int y=2,int z=1){
	y++;
	cout<<y+z<<endl;
	
}
int main(){
	int x=10;
	print(x);
	cout<<x<<endl;
	
	cout<<&x<<endl;
}
