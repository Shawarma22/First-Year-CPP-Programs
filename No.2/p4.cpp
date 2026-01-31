#include <iostream>
using namespace std;

void getBalance(float &balance) {
    cout << "Enter initial balance: ";
    cin >> balance;
}

void deposit(float &balance, float amount = 100) {
    balance += amount;
    cout << "Deposited: " << amount << endl;
}

float withdraw(float &balance, float amount) {
    if(balance >= amount) {
        balance -= amount;
        cout << "Withdrawn: " << amount << endl;
        return amount;
    } else {
        cout << "Insufficient balance!" << endl;
        return 0;
    }
}

int main() {
    float balance;
    float withdrawAmount;

    getBalance(balance);
    cout << "Current Balance: " << balance << endl;

    deposit(balance); 
    cout << "Balance after default deposit: " << balance << endl;

    cout << "Enter amount to withdraw: ";
    cin >> withdrawAmount;
    withdraw(balance, withdrawAmount);
    cout << "Final Balance: " << balance << endl;

    return 0;
}
