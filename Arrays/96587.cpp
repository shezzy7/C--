#include <iostream>
using namespace std;

void copy(int arr[][3], int brr[][3], int i, int j) {
    for (int k = 0; k < i; k++) {
        for (int l = 0; l < j; l++) {
            brr[k][l] = arr[l][k];
        }
    }
}

int main() {
    int arr[3][3];
    cout << "enter values of arrays\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    int brr[3][3];
    copy(arr, brr, 3, 3);


    cout << "transpose of arr is " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << brr[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}

