#include<iostream>
using namespace std;
int main (){
int x;
int amount=0;
int count=0;
while(true){

cout<<"enter 1 for rikshaw"<<endl;
cout<<"enter 2 for car"<<endl;
cout<<"enter 3 for bus"<<endl;
cout<<"enter 4 to show record"<<endl;
cout<<"enter 5 to reset record"<<endl;
cin>>x;
if(x==1){
	if(count<5){
	
	amount=amount+100;
	count=count+1;}
	else{
		cout<<"parking is full"<<endl;
	}
}
else if(x==2){
	if(count<5){
	
	amount=amount+200;
	count=count+1;}
	else{
		cout<<"parking is full"<<endl;
}}
else if(x==3){
	if(count<5){
	
	amount=amount+300;
	count=count+1;}
	else{
		
		cout<<"parking is full"<<endl;
	}
}
else if(x==4){
	cout<<"the total number of vehicles ="<<count<<endl;
	cout<<"the total amount collected ="<<amount<<endl;
}
else if(x==5){
	amount=0;
	count=0;
}

else{
	cout<<"invalid instructions"<<endl;
}}
return 0;

}
