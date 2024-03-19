#include <iostream>
using namespace std;
int main(){
	int students,subject ;
	cout<<"enter total no of subjects : ";
	cin>>students;
	cout<<"total no of subjects : ";
	cin>>subject;
	int arr[students][subject];

	for(int i=0;i<subject;i++){
	
	cout<<"enter detail of student "<<i+1<<endl;

		for(int j=0;j<2;j++){
			cout<<"subject "<<j+1<<" : ";
			cin>>arr[i][j];
		}
	cout<<endl;
	
	}
	cout<<"here is the detail of marks of all stdents\n";
	for(int i=0;i<subject;i++){
		cout<<"details of student "<<i+1<<endl;
	
		for(int j=0;j<2;j++){
			cout<<"subject "<<j+1<<" : ";
			cout<<arr[i][j]<<endl;
			
		}
	
		cout<<endl;
	}
	return 0;
}
