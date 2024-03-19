#include<iostream>
using namespace std;
int main (){
	int x;
	cout<<"enter a no"<<endl;;
	cin>>x;
	if(x<=50)
	     {
	     	cout<<x+100<<endl;
		 }
		 else 
		 {cout<<x-10<<endl;
		 }
		 int y;
		 cout<<"entre number"<<endl;
		 cin>>y;
		 if(y%2==0){
		 	cout<<y*10;
		 }
		 else {
		 	cout<<y*20;
		 }
		 char z;
		 cout<<"entre operator(+-*/%)"<<endl;
		 cin>>z;
		 if(z=='+'){
		 	cout<<"the result ="<<x+y; 
		 }
		 else if(z=='-'){
		 	cout<<"the result ="<<x-y; 
		 }
		 else if(z=='*'){
		 	cout<<"the result ="<<x*y; 
		 }
		 else if(z=='/'){
		 	cout<<"the result ="<<x/y; 
		 }
		else  if(z=='%'){
		 	cout<<"the result ="<<x%y; 
		 }
		 else {
		 	cout<<"invalid operator"<<endl;
		 }
		 
return 0;}
