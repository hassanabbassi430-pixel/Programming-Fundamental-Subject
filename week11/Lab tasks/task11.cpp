#include <iostream>
using namespace std;

char objects[5][5] = {
    {'-', '#', '#', '-', '#'},
    {'#', '-', '-', '#', '-'},
    {'-', '#', '-', '-', '-'},
    {'#', '-', '#', '-', '#'},
    {'#', '-', '-', '-', '-'}
};

bool gravity = false;
bool isBlackHole = false;

// Display function
void displayWorld() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << objects[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Set gravity
void setGravityStatus(bool status) {
    gravity = status;
}

// Set black hole mode
void setBlackHole(bool status) {
    isBlackHole = status;
}

// Apply gravity with black hole logic
void applyGravity() {

    for (int i = 3; i >= 0; i--) {
        for (int j = 0; j < 5; j++) {

            if (objects[i][j] == '#') {

                if (objects[i+1][j] == '-') {
                    // normal fall
                    objects[i+1][j] = '#';
                    objects[i][j] = '-';
                }
                else if (i == 4 && isBlackHole) {
                    // black hole behavior
                    objects[i][j] = '-';
                    objects[0][j] = '#';
                }
            }
        }
    }
}

// Time ticks
void timeTick(int times) {
    if (!gravity) return;

    for (int t = 0; t < times; t++) {
        applyGravity();
    }
}

int main() {

    cout << "Initial World:\n";
    displayWorld();

    setGravityStatus(true);

    // Try both modes:
    setBlackHole(true);   // change to false to test normal behavior

    timeTick(3);

    cout << "After TimeTicks:\n";
    displayWorld();

    return 0;
}