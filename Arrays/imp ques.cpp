#include <iostream>
using namespace std;
int main(){
	int subject,marks;
	cout<<"enter total no of subjects : ";
	cin>>subject;
	int arr[subject][subject];
	int x=1;
	for(int i=0;i<subject;i++){
	
	cout<<"enter detail of student "<<x<<endl;
	cout<<"subject no\tmarks"<<endl;

		for(int j=0;j<subject;j++){
			cin>>arr[i][j];
		}
	cout<<endl;
	x++;	
	}

	int y=1;
	cout<<"here is the detail of marks of all stdents\n";
	for(int i=0;i<subject;i++){
		cout<<"details of student "<<y<<endl;
		cout<<"subject\tmarks"<<endl;
		for(int j=0;j<subject;j++){
			cout<<arr[i][j]<<"\t"<<endl;
			
		}
		y++;
		cout<<endl;
	}
	return 0;
}
