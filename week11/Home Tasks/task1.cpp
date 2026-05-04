#include <iostream>
using namespace std;

const int ROWS = 10;
const int COLS = 10;

char board[ROWS][COLS] = {
    {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
    {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
    {'-', '-', 'E', '-', '-', '-', 'E', '-', '-', '-'},
    {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
    {'-', '-', '-', '-', 'P', '-', '-', '-', '-', '-'},
    {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
    {'-', '-', 'E', '-', '-', '-', '-', 'E', '-', '-'},
    {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
    {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
    {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'}
};

int playerRow = 4, playerCol = 4;


// 1. Print Board
void printBoard() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}


// 2. Move Player Left
void movePlayerLeft() {
    if (playerCol > 0) {
        board[playerRow][playerCol] = '-';
        playerCol--;
        board[playerRow][playerCol] = 'P';
    }
}


// 3. Move Player Right
void movePlayerRight() {
    if (playerCol < COLS - 1) {
        board[playerRow][playerCol] = '-';
        playerCol++;
        board[playerRow][playerCol] = 'P';
    }
}


// 4. Fire (create bullet above player)
void fire() {
    if (playerRow > 0) {
        board[playerRow - 1][playerCol] = '|';
    }
}


// 5. Move Enemy
void moveEnemy(char object, string direction) {

    if (direction == "left") {
        for (int i = 0; i < ROWS; i++) {
            for (int j = 1; j < COLS; j++) {
                if (board[i][j] == object && board[i][j - 1] == '-') {
                    board[i][j - 1] = object;
                    board[i][j] = '-';
                }
            }
        }
    }

    if (direction == "right") {
        for (int i = 0; i < ROWS; i++) {
            for (int j = COLS - 2; j >= 0; j--) {
                if (board[i][j] == object && board[i][j + 1] == '-') {
                    board[i][j + 1] = object;
                    board[i][j] = '-';
                }
            }
        }
    }
}


// 6. Move Fire (bullet goes upward)
void moveFire(int timeStep) {

    for (int t = 0; t < timeStep; t++) {

        for (int i = 1; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {

                if (board[i][j] == '|') {

                    // If hits enemy
                    if (board[i - 1][j] == 'E') {
                        board[i - 1][j] = '-';
                        board[i][j] = '-';
                    }
                    else {
                        board[i - 1][j] = '|';
                        board[i][j] = '-';
                    }
                }
            }
        }
    }
}


// Main Function
int main() {

    cout << "Initial Board:\n";
    printBoard();

    movePlayerLeft();
    movePlayerRight();

    fire();
    moveFire(1);

    moveEnemy('E', "left");

    cout << "\nAfter Actions:\n";
    printBoard();

    return 0;
}