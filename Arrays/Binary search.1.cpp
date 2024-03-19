#include <iostream>
using namespace std;
void search(int n,int arr[]){
}
int main(){
	int n;
	cout<<"Enter size : ";
	cin>>n;
	int arr[n];
	cout<<"Enter vales : ";
	//inputting array
	for(int i=0;i<n;i++){
	cin>>arr[i];
	}
	//sorting array by selection sort method
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		if(min!=i){
			swap(arr[i],arr[min]);
		}
		
	}
	//displaying after sorting
	cout<<"After sorting : ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	cout<<"\n";
	//binary search process
	int x;
	cout<<"Enter required no : ";
	cin>>x;
	int loc=-1,mid,start=0,end=n-1;
		for(int i=start;i<=end;i++){
		mid=(start+end)/2;
		if(arr[mid]==x){
			loc=mid;
			break;
		}
		else if(arr[mid]>x){
			end=mid-1;
		}
		else{
			start=mid+1;
		}
	}
	if(loc==-1){
		cout<<"Given no  "<<x<<" is  not present in array\n";
	}
	else{
		cout<<x<< " is present at index "<<loc<<endl;
	}

	//using while loop
//	while(start<=end){
//		mid=(start+end)/2;
//		if(arr[mid]==x){
//			loc=mid;
//			break;
//		}
//		else if(arr[mid]>x){
//			end=mid-1;
//		}
//		else{
//			start=mid+1;
//		}
//	}		
//		cout<<"Answer found using while loop \n";
//	if(loc==-1){
//		cout<<"Given no  "<<x<<" is  not present in array\n";
//	}
//	else{
//		cout<<x<< " is present at index "<<loc<<endl;
//	}
//	cout<<endl;
		
		//Binary search using for loop
		cout<<"Answer found using For  loop \n";
		
}

