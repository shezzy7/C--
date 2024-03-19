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
	
	cin>>m;
	erase(v.begin()+m);
	for(int i=0;i<n;i++){
		cout<<v[i];
	}
	return 0;


}
