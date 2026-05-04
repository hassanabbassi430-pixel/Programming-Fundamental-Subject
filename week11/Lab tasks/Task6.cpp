#include <iostream>
#include <string>
using namespace std;

// Function to check hit or miss
string fire(char grid[5][5], string coord) {
    int row = coord[0] - 'A';   // A→0, B→1, ...
    int col = coord[1] - '1';   // 1→0, 2→1, ...

    if (grid[row][col] == '*') {
        return "BOOM";
    } else {
        return "splash";
    }
}

int main() {

    // Hardcoded 5x5 battleship grid
    char grid[5][5] = {
        {'.', '.', '*', '.', '.'},
        {'*', '.', '.', '.', '.'},
        {'.', '.', '.', '*', '.'},
        {'.', '*', '.', '.', '.'},
        {'.', '.', '.', '.', '*'}
    };

    string coord;

    cout << "Enter coordinate (e.g., A1, B3): ";
    cin >> coord;

    cout << fire(grid, coord);

    return 0;
}