#include <iostream>
using namespace std;
int main(){
	int arr[10];
	for(int i=0;i<10;i++){
		cin>>arr[i];
	}
	int pos=0;
	int neg=0;
	int zero=0;
	int odd=0;
	int even=0;
	for(int i=1;i<10;i++){
		if(arr[i]>0){
			pos++;
		}
		else if(arr[i]<0){
			neg++;
		}
		else if(arr[i]%2==0){
			even++;
		}
		else if(arr[i]%2==1){
			odd++;;
		}
		else{
			zero++;
		}
	}
	cout<<" zeros \n"<<zero<<" even\n"<<even<<" odd\n"<<odd<<"pos\n"<<pos<<"neg\n"<<neg<<endl;
		return 0;
}
