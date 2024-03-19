#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int maxNO=INT_MIN;
	int minNO=INT_MAX;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>maxNO){
			maxNO=arr[i];
		}
		if(arr[i]<minNO){
			minNO=arr[i];
		}
	}
	cout<<"minmum no is"<<minNO;
	return 0;
}
