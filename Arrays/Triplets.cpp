#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter array size : ";
	cin>>n;
	int v[n];
	cout<<"Enter elemnts of array : ";
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	int x;
	cout<<"Enter your number : ";
	cin>>x;
	int y=0;
	for(int i=0;i<n-2;i++){
		for(int j=i+1;j<n-1;j++){
			for(int k=j+1;k<n;k++){
				if(v[i]+v[j]+v[k]==x){
					y++;
				}
			}
		}
	}
	cout<<"Number of tripletes making a sum equal to "<<x<<" are : "<<y;
	return 0;
}
