#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];

    cout << "Enter elements of 3x3 matrix:\n";

    // Input
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    bool isIdentity = true;

    // Check identity
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                if (matrix[i][j] != 1) {
                    isIdentity = false;
                }
            } else {
                if (matrix[i][j] != 0) {
                    isIdentity = false;
                }
            }
        }
    }

    // Output result
    if (isIdentity) {
        cout << "Matrix is an Identity Matrix";
    } else {
        cout << "Matrix is NOT an Identity Matrix";
    }

    return 0;
}