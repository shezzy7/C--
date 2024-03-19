#include <iostream>
using namespace std;
void sort(int v[],int size){
	int count=0;
	for(int i=0;i<size;i++){
		if(v[i]==0){
			count++;
		}
	}
	for(int i=0;i<size;i++){
		if(i<count){
			v[i]=0;
		}
		else{
			v[i]=1;
		}
	}
	cout<<"sorted form : ";
	for(int i=0;i<size;i++){
		cout<<v[i]<<" ";
	}
}
int main(){
	int size;
	cout<<"size : ";
	cin>>size;
	int v[size];
	cout<<"enter elements of array : ";
	for(int i=0;i<size;i++){
		cin>>v[i];
	}
	sort(v,size);
	cout<<"unsorte dform : ";
	for(int i=0;i<size;i++){
		cout<<v[i]<<" ";
	}
	
	
	return 0;
	}
