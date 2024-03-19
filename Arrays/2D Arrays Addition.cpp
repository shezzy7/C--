#include <iostream>
using namespace std;
int main(){
	int a[3][3];
	int b[3][3];
	cout<<"enter valus of a\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>a[i][j];
		}
	}
	cout<<"enter values of b\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>b[i][j];
		}
	}
	int c[3][3];
	cout<<"sum is\n";
	cout<<"addition\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			c[i][j]=a[i][j]+b[i][j];
			
			cout<<c[i][j]<<endl;8;
		}
	}
	int d[3][3];
	cout<<"substraction\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			d[i][j]=a[i][j]-b[i][j];
			
			cout<<d[i][j]<<endl;
		}
	}
	int e[3][3];
	cout<<"multiplication \n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			e[i][j]=a[i][j]*b[i][j];
			
			cout<<e[i][j]<<endl;
		}
	}
	

	
	return 0;
}
