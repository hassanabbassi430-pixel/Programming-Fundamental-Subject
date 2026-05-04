#include <iostream>
#include <string>
using namespace std;

// A. Print Toyota Blue cars
void printToyotaBlue(string carData[][2], int rows) {
    cout << "Toyota Blue Cars:\n";
    for (int i = 0; i < rows; i++) {
        if (carData[i][0] == "Toyota" && carData[i][1] == "Blue") {
            cout << carData[i][0] << " " << carData[i][1] << endl;
        }
    }
}

// B. Count Red cars
int countRed(string carData[][2], int rows) {
    int count = 0;
    for (int i = 0; i < rows; i++) {
        if (carData[i][1] == "Red") {
            count++;
        }
    }
    return count;
}

// C. Count Nissan cars
int countNissan(string carData[][2], int rows) {
    int count = 0;
    for (int i = 0; i < rows; i++) {
        if (carData[i][0] == "Nissan") {
            count++;
        }
    }
    return count;
}

// D. Converter function (count cars of given color)
int converter(string carData[][2], int rows, string color) {
    int count = 0;
    for (int i = 0; i < rows; i++) {
        if (carData[i][1] == color) {
            count++;
        }
    }
    return count;
}

// E. Transpose matrix (rows ↔ columns)
void transpose(string carData[][2], int rows) {
    cout << "Transposed Matrix:\n";
    for (int j = 0; j < 2; j++) {
        for (int i = 0; i < rows; i++) {
            cout << carData[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {

    string carData[5][2] = {
        {"Toyota", "Blue"},
        {"Honda", "Red"},
        {"Nissan", "Black"},
        {"Toyota", "Blue"},
        {"Nissan", "Red"}
    };

    int rows = 5;

    // A
    printToyotaBlue(carData, rows);

    // B
    cout << "\nTotal Red cars: " << countRed(carData, rows) << endl;

    // C
    cout << "Total Nissan cars: " << countNissan(carData, rows) << endl;

    // D
    cout << "Total Blue cars (converter): " 
         << converter(carData, rows, "Blue") << endl;

    // E
    transpose(carData, rows);

    return 0;
}