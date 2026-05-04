#include <iostream>
using namespace std;

int countIdenticalArrays(int arr[][3], int n) {
    int count = 0;

    // Compare each row with next rows
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

            // Check if rows i and j are identical
            if (arr[i][0] == arr[j][0] &&
                arr[i][1] == arr[j][1] &&
                arr[i][2] == arr[j][2]) {

                count++;
            }
        }
    }

    return count;
}

int main() {

    int arr[4][3] = {
        {0, 0, 0},
        {0, 1, 2},
        {0, 0, 0},
        {2, 1, 0}
    };

    cout << "Identical row pairs = "
         << countIdenticalArrays(arr, 4);

    return 0;
}