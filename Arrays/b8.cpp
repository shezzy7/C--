#include <iostream>
using namespace std;
int main(){
	int day,month;
	cout<<"Enter day and month respectively : ";
	cin>>day>>month;
	int total=day;
	int arr[]={31,28,31,30,31,30,31,31,30,31,30,31};
	for(int i=0;i<month-1;i++){
		total=total+arr[i];
	}
	cout<<"Total days before are : "<<total;
}
