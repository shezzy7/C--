#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;
	cout<<"Enter size of vector : ";
	cin>>n;
	vector<int>v(n);
	cout<<"enter elemnts of vector : ";;
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	int m;
	cout<<"Enter indice at which we have to delete the value : ";
	
		if(m<n){
		
		cin>>m;
	}
		else {
		
		cout<<"Entered indices is out of range of our array please enter correct one : ";
		cin>>n;
	}
	return 0;


}
