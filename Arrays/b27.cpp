#include <iostream>
using namespace std;
int main(){
	//input marks of 10 student then display grade of each student
	int arr[10];
	cout<<"enter marks \n ";
	for(int i=0;i<10;i++){
		cout<<"student "<<i+1<<" : ";
		cin>>arr[i];
	}
	for(int i=0;i<10;i++){
		if(arr[i]>=80){
			cout<<"student "<<i+1<<"'s Grade is = 'A'\n";
		}
		else if(arr[i]>=60){
			cout<<"student "<<i+1<<"'s Grade is = 'B'\n";
			
		}
		else if(arr[i]>=40){
			cout<<"student "<<i+1<<"'s Grade is = 'C'\n";
		}
	
		else{
			cout<<"student "<<i+1<<"'s Grade is = 'F'\n";
		}
	}
}
