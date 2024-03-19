#include <iostream>
using namespace std;
int main(){
	int arr[7];
	cout<<"enter temperature from day 1 to day 7 : ";
	for(int i=0;i<7;i++){
		cin>>arr[i];
	}
	int max=arr[0];
	int min=arr[0];
	int sum=0;
	for(int i=0;i<7;i++){
		if(max<arr[i]){
			max=arr[i];
		}
		else if(min>arr[i]){
			min=arr[i];
		}
		sum+=arr[i];
	}
	int avg=sum/7.0;
	cout<<"maximum temp in week was : "<<max<<endl;
	cout<<"minimum temp in week was : "<<min<<endl;
	cout<<"avg temp of week was : "<<avg<<endl;
}
