#include <iostream>
using namespace std;
int main(){
	//inputting names and salaries of 10 employees 
	//then checking anual salary of each person 
	//if anual salary of anyone is above 250000 then display 
	//name of that person,salary and a text message "Tax to  be pay"
	//else print the name,salary and a text"No text"
	//Do it for each person 
	string name[10];
	int salary[10];
	//inputting names and salaries
	cout<<"Name and salary respectively\n";
	for(int i=0;i<5;i++){
		cout<<"Name "<<i+1<<" : ";
		cin>>name[i];
		cout<<"Salary : ";
		cin>>salary[i];
	}
	cout<<endl;
	//checking salaries and printing results
	cout<<"NAME\tSALARY\tSTATUS\n\n";
	for(int i=0;i<5;i++){
		int sal=salary[i]*12;
		if(sal>=250000){
			cout<<name[i]<<"\t"<<salary[i]<<"\tTax to be paid\n";
			
		}
		else{
			cout<<name[i]<<"\t"<<salary[i]<<"\tNo Tax \n";
		}
	}
	
}
