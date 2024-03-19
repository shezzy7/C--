#include <iostream>
using namespace std;
int main(){
	//declaration
	int A[3][3];
	int B[3][3];
	
	//initialization
	cout<<"enter valus of a\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>A[i][j];
		}
	}
	cout<<"enter values of b\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>B[i][j];
		}
	}
	
	//addition
	int C[3][3];
	cout<<"addition\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			C[i][j]=A[i][j]+B[i][j];
			cout<<C[i][j]<<endl;8;
		}
	}
	
	//substraction
	int D[3][3];
	cout<<"substraction\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			D[i][j]=A[i][j]-B[i][j];	
			cout<<D[i][j]<<endl;
		}
	}
	
	//multiplication
	int E[3][3];
	cout<<"multiplication \n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			E[i][j]=A[i][j]*B[i][j];
			cout<<E[i][j]<<endl;
		}
	}
	
	//Transpose of A
	int F[3][3];
	cout<<"Transpose of A is \n";
	for(int j=0;j<3;j++){
		for(int i=0;i<3;i++){
		F[i][j]=A[j][i];
		cout<<F[i][j]<<" ";
		}
		cout<<endl;
	}

	
	return 0;
}
