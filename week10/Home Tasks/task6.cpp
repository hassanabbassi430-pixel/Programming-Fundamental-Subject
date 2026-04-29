
#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n-1);
}

// Check if a number is strong
bool isStrongNumber(int num) {
    int original = num;
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    return sum == original;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isStrongNumber(num))
        cout << num << " is a strong number." << endl;
    else
        cout << num << " is not a strong number." << endl;
    return 0;
}
