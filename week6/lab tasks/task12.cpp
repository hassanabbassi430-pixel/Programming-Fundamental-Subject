#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >>n;

    int arr[n];
    int uniqueCount = 0;

    cout << "Enter " << n << " numbers, one per line:" << endl;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        bool isUnique = true;
        for (int j = 0; j < uniqueCount; j++) {
            if (arr[j] == num) {
                cout << "Already Entered: " << num << endl;
                isUnique = false;
                break;
            }
        }

        if (isUnique) {
            arr[uniqueCount] = num;
            uniqueCount++;
        }
    }

    cout << "Unique numbers entered:";
    for (int i = 0; i < uniqueCount; i++) {
        cout << " " << arr[i];
    }
    cout << endl;

    return 0;
}