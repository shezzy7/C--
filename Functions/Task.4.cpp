#include <iostream>
using namespace std;
void big(int a,int b,int c){
	if(a>b&&a>c){
		cout<<"the greater nmbr is : "<<a<<endl;
	}
	else if(b>a&&b>c){
		cout<<"the greater number is : "<<b<<endl;
	}
	else {
		cout<<"the greater nmbr is : "<<c<<endl;
	}
}
void small(int a,int b,int c){
		if(a<b&&a<c){
		cout<<"the smaller nmbr is : "<<a<<endl;
	}
	else if(b<a&&b<c){
		cout<<"the smaller number is : "<<b<<endl;
	}
	else {
		cout<<"the smaller nmbr is : "<<c<<endl;
	}

	
}

int main(){
	int x,y,z;
	cin>>x;
	cin>>y;
	cin>>z;
	big(x,y,z);
	small(x,y,z);
	
	return 0;
	
}
