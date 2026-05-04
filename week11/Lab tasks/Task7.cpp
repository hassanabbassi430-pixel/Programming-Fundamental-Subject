#include <iostream>
using namespace std;

// Function to check goal
bool isGoalScored(char field[7][16]) {

    int ballRow = -1, ballCol = -1;

    // Find position of ball '0'
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 16; j++) {
            if (field[i][j] == '0') {
                ballRow = i;
                ballCol = j;
            }
        }
    }

    // Check upward path (towards goal)
    for (int i = ballRow; i >= 0; i--) {
        if (field[i][ballCol] == '#') {
            return false; // blocked
        }
    }

    return true; // clear path → goal
}

int main() {

    char field[7][16] = {
        {' ', '#', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', '#', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', '#', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', '#', '#', '#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', '#', ' ', '0', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}
    };

    if (isGoalScored(field)) {
        cout << "True (Goal Scored)";
    } else {
        cout << "False (No Goal)";
    }

    return 0;
}