#include <iostream>
using namespace std;
int main(){
	int n;
	long long prdct=1;
	int sum=0;
	int count=0;
	char c;
	do{
		cout<<"Enter number (ente q to exit) : ";
		cin>>c;
		if(c!='q'){
			n=c-'0';
			prdct=prdct*n;
			sum=sum+n;
			count++;
		}
		
	}while(c!='q');
	if(count>0){
	
	cout<<"Product is : "<<prdct<<endl;
	
	float avg=sum/float(count);
	cout<<avg;
}
	return 0;
}
