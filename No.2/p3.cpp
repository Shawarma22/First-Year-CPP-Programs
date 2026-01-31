
#include <iostream>
using namespace std;

void getInput(int &base, int &exponent) {
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;
}

long calculatePower(int base, int exponent = 2) {
    long result = 1;
    for(int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int base, exponent;

    getInput(base, exponent);

    cout << "Result with provided exponent: " << calculatePower(base, exponent) << endl;
    cout << "Result with default exponent (2): " << calculatePower(base) << endl;

    return 0;
}
