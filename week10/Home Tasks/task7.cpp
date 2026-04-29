#include <iostream>
using namespace std;

float calculateBalance(float balance, int years) {
    float interestRate;
    
    if (balance < 10000)
        interestRate = 0.05;
    else if (balance <= 50000)
        interestRate = 0.07;
    else
        interestRate = 0.10;

    if (years >= 3)
        interestRate += 0.02;

    float updatedBalance = balance + (balance * interestRate * years);
    return updatedBalance;
}

int main() {
    float balance;
    int years;
    cout << "Enter Balance and years: ";
    cin >> balance >> years;
    
    float updatedBalance = calculateBalance(balance, years);
    cout << "Updated Balance: " << updatedBalance << endl;
    return 0;
}