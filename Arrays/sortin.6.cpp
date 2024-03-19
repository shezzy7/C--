#include <iostream>
using namespace std;

int main(){
	int a[]={6,9,8,7,3};
	int size=sizeof(a)/sizeof(a[0]);
	cout<<"elements in orignal form : ";
	for(int i=0;i<size;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<size-1;i++){
		for(int j=i+1;j<size;j++){
			if(a[j]<a[i]){
				int temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	cout<<"elements in ascending order : ";
	for(int i=0;i<size;i++){
		cout<<a[i]<<" ";
	}
}
