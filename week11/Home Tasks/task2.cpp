#include <iostream>
using namespace std;

const int ROWS = 10;
const int COLS = 15;

char board[ROWS][COLS];

int playerRow = 8, playerCol = 7;
int lives = 3;
int health = 100;
int score = 0;
int level = 1;

// Initialize board
void initBoard() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            board[i][j] = '-';
        }
    }

    // Place player
    board[playerRow][playerCol] = 'P';

    // Enemies (3 types)
    board[1][2] = 'E';
    board[1][10] = 'A';
    board[2][5] = 'B';
}

// Print board + stats
void printBoard() {
    cout << "\nLevel: " << level
         << "  Score: " << score
         << "  Lives: " << lives
         << "  Health: " << health << endl;

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

// Move player
void movePlayer(char dir) {
    board[playerRow][playerCol] = '-';

    if (dir == 'L' && playerCol > 0) playerCol--;
    if (dir == 'R' && playerCol < COLS - 1) playerCol++;

    board[playerRow][playerCol] = 'P';
}

// Player fire
void playerFire() {
    if (playerRow > 0)
        board[playerRow - 1][playerCol] = '|';
}

// Move bullets
void movePlayerBullets() {
    for (int i = 1; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {

            if (board[i][j] == '|') {

                if (board[i - 1][j] == 'E' ||
                    board[i - 1][j] == 'A' ||
                    board[i - 1][j] == 'B') {

                    board[i - 1][j] = '-';
                    board[i][j] = '-';
                    score += 10;
                }
                else {
                    board[i - 1][j] = '|';
                    board[i][j] = '-';
                }
            }
        }
    }
}

// Enemy movement
void moveEnemies() {
    for (int i = ROWS - 2; i >= 0; i--) {
        for (int j = 0; j < COLS; j++) {

            if (board[i][j] == 'E') {
                if (board[i + 1][j] == '-') {
                    board[i + 1][j] = 'E';
                    board[i][j] = '-';
                }
            }

            if (board[i][j] == 'A') {
                if (j + 1 < COLS && board[i][j + 1] == '-') {
                    board[i][j + 1] = 'A';
                    board[i][j] = '-';
                }
            }

            if (board[i][j] == 'B') {
                // Shooter enemy fires
                if (i + 1 < ROWS)
                    board[i + 1][j] = '!';
            }
        }
    }
}

// Move enemy bullets
void moveEnemyBullets() {
    for (int i = ROWS - 2; i >= 0; i--) {
        for (int j = 0; j < COLS; j++) {

            if (board[i][j] == '!') {

                if (board[i + 1][j] == 'P') {
                    health -= 20;
                    board[i][j] = '-';

                    if (health <= 0) {
                        lives--;
                        health = 100;
                    }
                }
                else {
                    board[i + 1][j] = '!';
                    board[i][j] = '-';
                }
            }
        }
    }
}

// Level system
void checkLevelUp() {
    if (score >= 30 && level == 1) {
        level = 2;
        board[0][3] = 'E';
        board[0][8] = 'A';
    }
    if (score >= 60 && level == 2) {
        level = 3;
        board[0][5] = 'B';
    }
}

int main() {

    initBoard();

    char input;

    while (lives > 0) {

        printBoard();

        cout << "Enter Move (L/R/F): ";
        cin >> input;

        if (input == 'L') movePlayer('L');
        if (input == 'R') movePlayer('R');
        if (input == 'F') playerFire();

        movePlayerBullets();
        moveEnemies();
        moveEnemyBullets();
        checkLevelUp();
    }

    cout << "Game Over! Final Score: " << score << endl;

    return 0;
}