#include <iostream>
using namespace std;
int main(){
	int rno[5];
	int marks[5];
	cout<<"Enter roll numbers\n";
	for(int i=0;i<5;i++){
		cout<<"Student "<<i<<" : ";
		cin>>rno[i];
	}
	cout<<"Enter marks of students \n";
	for(int i=0;i<5;i++){
		cout<<"Enter marks of student of rool no "<<rno[i]<<" : ";
		cin>>marks[i];
	}
	int max=marks[0];
	int s;
	for(int i=0;i<5;i++){
		if(max<marks[i]){
			max=marks[i];
			s=i;
		}
	}
	cout<<"Here is the roll no and marks of the student with highest no\n";
	cout<<"Roll No : "<<rno[s]<<endl;
	cout<<"Marks : "<<marks[s]<<endl;
	
}
