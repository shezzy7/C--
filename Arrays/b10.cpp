#include <iostream>
using namespace std;
int main(){
	int numbers[5];
	int squares[5];
	int cubes[5];
	int sums[5];
	for(int i=0;i<5;i++){
		numbers[i]=i;
	}
	for(int i=0;i<5;i++){
		squares[i]=i*i;
	}
	for(int i=0;i<5;i++){
		cubes[i]=i*i*i;
	}
	for(int i=0;i<5;i++){
		sums[i]=numbers[i]+squares[i]+cubes[i];
	}
	cout<<"Numbers are : ";
	for(int i=0;i<5;i++){
		cout<<numbers[i]<<" ";
	}
	cout<<endl;
	cout<<"Square are : ";
	for(int i=0;i<5;i++){
		cout<<squares[i]<<" ";
	}
	cout<<endl;
	cout<<"cubes are : ";
	for(int i=0;i<5;i++){
		cout<<cubes[i]<<" ";
	}
	cout<<endl;
	cout<<"sums are : ";
	for(int i=0;i<5;i++){
		cout<<numbers[i]<<" ";
	}
	cout<<endl;
	int sum=0;
	for(int i=0;i<5;i++){
		sum=sum+sums[i];
	}
	cout<<"Grand total is : "<<sum;
}
	
