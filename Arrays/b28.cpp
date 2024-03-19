#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter no of customers : ";
	cin>>n;
	int mango[n],orang[n],banana[n];
	cout<<"Enter no of fruits purchased by customers\n";
	for(int i=0;i<n;i++){
		cout<<"Customer "<<i+1<<" \n";
		
		cout<<"Mangoes : ";
		cin>>mango[i];
		cout<<"Oranges : ";
		cin>>orang[i];
		cout<<"Bannans : ";
		cin>>banana[i];
	}
	int t_bill;
	cout<<"-------------------------------------------------------------\n";
	cout<<"C No.\tOranges\tMangoes\tBannanas    Total Bill\n";
	cout<<"-------------------------------------------------------------\n";
	for(int i=0;i<n;i++){
		cout<<i+1<<"\t    ";
		cout<<orang[i]<<"\t   "<<mango[i]<<"\t  "<<banana[i]<<"\t      ";
		cout<<(mango[i]*20)+(orang[i]*10)+(banana[i]*5)<<endl;
	}
	
}
