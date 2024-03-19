#include <iostream>
using namespace std;
int main(){
	int arr[]={5,9,6,7,11,12};
	int count=0;
	int x=0;
	for(int i=0;i<6;i++){
		for(int j=2;j<arr[i];j++){
			if(arr[i]%j==0){
				count++;
			}
		}
			if(count==0){
				x++;
			}
			count=0;
		}
	
	cout<<"Total prime no are : "<<x;

}
