#include <iostream>
#include <vector>
using namespace std;
void get(vector<int>&v){
	cout<<"Enter elemnts of vector : ";
	for(int i=0;i<6;i++){
		int ele;
		cin>>ele;
		v.push_back(ele);
	}
}
void sort(vector<int>&v){
	for(int i=0;i<v.size()-1;i++){
		int idx=i;
		for(int j=i+1;j<v.size();j++){
			if(v[j]<v[idx]){
				idx=j;
			}
		}
		if(idx!=i){
			swap(v[i],v[idx]);
		}
	}
}
void print(vector<int>v){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
}
int main(){
	vector<int>v;
	
	get(v);
	sort(v);
	print(v);
}
