#include <iostream>
using namespace std;
int main(){
	int score[5][5]={{10,20,30,40,50},{60,70,80,90,100},{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
	int r,s;
	cout<<"Enter Row no : ";
	cin>>r;
	cout<<"Enter Student no : ";
	cin>>s;
	cout<<score[r][s];
}
