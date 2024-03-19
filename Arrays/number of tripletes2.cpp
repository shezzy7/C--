#include <iostream>
using namespace std;
int main(){
	 int v[12]={11,12,11,13,12,13,12,14,14,14,15,16};
	 int triple=0;
	 for(int i=0;i<11;i++){
	 	for(int j=i+1;j<12;j++){
	 		
	 			if(v[i]==v[j]){
	 				triple++;
				 
			 }
		 }
	 }
	 cout<<"Number of triplets in array are : ";
	 cout<<triple;
}
