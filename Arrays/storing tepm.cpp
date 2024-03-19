#include <iostream>
using namespace std;
int main(){
	int days;
	cout<<"you want to store temp of how many days : ";
	cin>>days;
	int arr[days][0];
	cout<<"enter temprature \n";
	for(int i=0;i<days;i++){
		cout<<"day "<<i+1<<" : ";
		for(int j=0;j<=0;j++){
			cin>>arr[i][0];
		}
	}
	cout<<"these are the details \n";
	for(int i=0;i<days;i++){
		cout<<"day "<<i+1<<": ";
		for(int j=0;j<=0;j++){
			cout<<arr[i][0];
		}
		cout<<endl;
	}
	return 0;
}
