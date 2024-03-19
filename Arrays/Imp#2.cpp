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
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(v[i]+v[j]==x){
				y++;
			}
		}
	}
	cout<<"Number of pairs making sum equal to "<<x<<" are : "<<y;
	return 0;
}
