#include <iostream>
using namespace std;
int main(){
	int num, sum=0;
	while(true)
{
		do{      
		cout<<"\n entre x (entre zero for result) :"<<endl;
		cin>>num;
	         sum=sum+num;
	}while(num!=0);
	
	cout<<sum;
}
	
	
	return 0;
}
