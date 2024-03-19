#include <iostream>
using namespace std;
int main(){
	int arr[20];
	
	int pos=0;
	int neg=0;
	int zero=0;
	int odd=0;
	int even=0;
	for(int i=0; i<20; i++){
		cin>>arr[i];}
	
	for(int i=0; i<20; i++){
		
	if(arr[i]>0)
		pos++;
	
	else if(arr[i])
		neg++;
	
	else
		zero++;
	
	if(arr[i]%2==0)
		even ++;
	
	else
		odd++;}
	
	cout<<pos<<" "<<neg<<" "<<zero<<" "<<odd<<" "<<even<<endl;
	return 0;
}
