#include <iostream>
using namespace std;

int main() {
    int a[3][3];
    int f[3][3];

    cout << "Enter values of a:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    // Transpose the array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            f[i][j] = a[j][i];
            cout<<f[i][j]<<" ";
        }
        cout<<endl;
    }

  

    return 0;
}

