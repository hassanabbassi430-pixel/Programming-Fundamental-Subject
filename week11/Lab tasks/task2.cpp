

#include <iostream>
using namespace std;

// Function to print matrix
void printMatrix(int carData[][3], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            cout << carData[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Example car data (rows × columns)
    int carData[3][3] = {
        {100, 200, 300},
        {150, 250, 350},
        {175, 275, 375}
    };

    printMatrix(carData, 3);

    return 0;
}