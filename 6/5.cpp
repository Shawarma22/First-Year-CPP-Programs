#include <iostream>
 
using namespace std;
 
template <typename t>
void swapValues(t &a, t &b) {
    t c = a;
    a = b;
    b = c;
}
 
int main() {
    int a = 10;
    int b = 20;
 
    cout << "Before swap:\n";
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n\n";
 
    swapValues(a, b);
 
    cout << "After swap:\n";
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";
 
    return 0;
}
