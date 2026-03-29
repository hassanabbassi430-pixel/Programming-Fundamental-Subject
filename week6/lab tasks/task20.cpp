#include <iostream>
using namespace std;

char* jazzify(char chords[][10], int n) {
    for (int i = 0; i < n; i++) {
        int len = 0;
        while (chords[i][len] != '\0') len++;

        // Check if the chord already ends with "7"
        if (!(len >= 2 && chords[i][len-2] == '7')) {
            chords[i][len] = '7';
            chords[i][len + 1] = '\0';
        }
    }
    return *chords;
}

int main() {
    int n;
    cout << "Enter the number of chords: ";
    cin >> n;

    char chords[n][10];
    cout << "Enter " << n << " chords, one per line:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> chords[i];
    }

    jazzify(chords, n);

    cout << "Jazzified chords: [";
    for (int i = 0; i < n; i++) {
        cout << chords[i];
        if (i < n - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}