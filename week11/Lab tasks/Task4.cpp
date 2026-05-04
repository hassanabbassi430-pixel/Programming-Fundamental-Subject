#include <iostream>
using namespace std;

// Function to calculate and print sum
void printSum(int arr[][3], int rows) {
    int sum = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            sum = sum + arr[i][j];
        }
    }

    cout << "Sum of all elements = " << sum << endl;
}

int main() {
    int rows;

    cout << "Enter row size: ";
    cin >> rows;

    int matrix[rows][3];   // 2D array with 3 columns

    cout << "Enter the elements of the matrix:\n";

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // Call function
    printSum(matrix, rows);

    return 0;
}