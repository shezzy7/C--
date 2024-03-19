//#include <iostream>
//using namespace std;
//int main(){
//	int arr[2][2]={10,11,12,13};
//	int brr[2][2];
//	for(int i=0;i<2;i++){
//		for(int j=0;i<2;j++)
//		brr[i][j]=arr[2-1-i][2-1-j];
//		cin>>brr[i][j];
//	}
//	for(int i=0;i<2;i++){
//		for(int j=0;j<2;j++)
//		cout<<brr[i][j]<<" ";
//	}
//}
#include <iostream>
using namespace std;

int main() {
    int arr[2][2] ;;
    int brr[2][2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin>> arr[i][j] ;;
        }
}
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            brr[i][j] = arr[j][i];
        }
    }

    cout << "Reversed Array: " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

