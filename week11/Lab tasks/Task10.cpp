
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

// 1. Display World
void displayWorld() {
    cout << "World:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << objects[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// 2. Set Gravity
void setGravityStatus(bool status) {
    gravity = status;
}

// Apply one gravity tick
void applyGravity() {
    for (int i = 3; i >= 0; i--) {   // bottom to top
        for (int j = 0; j < 5; j++) {
            if (objects[i][j] == '#' && objects[i+1][j] == '-') {
                objects[i+1][j] = '#';
                objects[i][j] = '-';
            }
        }
    }
}

// 3. Time Tick
void timeTick(int times) {
    if (!gravity) return;

    for (int t = 0; t < times; t++) {
        applyGravity();
    }
}

int main() {

    displayWorld();

    setGravityStatus(true);

    timeTick(3);

    displayWorld();

    return 0;
}