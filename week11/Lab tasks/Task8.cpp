#include <iostream>
using namespace std;

// Function to move largest-sum column to first
void largestColumnFirst(int M[][5], int rows) {

    int maxSum = -999999;
    int maxCol = 0;

    // Step 1: Find column with largest sum
    for (int j = 0; j < 5; j++) {
        int sum = 0;
        for (int i = 0; i < rows; i++) {
            sum += M[i][j];
        }

        if (sum > maxSum) {
            maxSum = sum;
            maxCol = j;
        }
    }

    // Step 2: Swap that column with first column
    for (int i = 0; i < rows; i++) {
        int temp = M[i][0];
        M[i][0] = M[i][maxCol];
        M[i][maxCol] = temp;
    }
}

// Function to print matrix
void printMatrix(int M[][5], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 5; j++) {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {

    int rows = 3;

    int M[3][5] = {
        {1, 2, 3, 4, 5},
        {5, 4, 3, 2, 1},
        {1, 1, 1, 1, 1}
    };

    cout << "Original Matrix:\n";
    printMatrix(M, rows);

    largestColumnFirst(M, rows);

    cout << "\nAfter largestColumnFirst:\n";
    printMatrix(M, rows);

    return 0;
}