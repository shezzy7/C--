#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter no of students\n";
	cin>>n;
	int arr[n][3];

	for(int i=0;i<n;i++){
		cout<<"enter details of student(age, marksand roll no respectively) "<<i+1<<" :";
		for(int j=0;j<3;j++){
			cin>>arr[i][j];
		}
	}
	cout<<"details of all students is given below\n";
	
	for(int i=0;i<n;i++){
		cout<<"student : "<<i+1<<endl;
		cout<<"age\tmarks\troll no"<<endl;
		for(int j=0;j<3;j++){
		
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
