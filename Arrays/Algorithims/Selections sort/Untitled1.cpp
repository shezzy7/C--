#include <iostream>
#include <vector>
using namespace std;
void selectionSort(int size,vector<int>&v){
	for(int i=0;i<size-1;i++){
		//finding minimum element 
		int min_idx=i;
		for(int j=i+1;j<size;j++){
			if(v[j]<v[min_idx]){
				min_idx=j;
			}
		}
		//placing minimum elemnt at the beginning
		if(min_idx!=i){
			swap(v[i],v[min_idx]);
		}
	}
}
int main(){
	int n;
	cout<<"Enter size of array : ";
	cin>>n;
	vector<int>a(n);
	cout<<"Enter "<<n<<" elements of array : ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	selectionSort(n,a);
	cout<<"Elements after Sorting : ";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
