#include <iostream>
#include <string>
#include <cstring>
 
using namespace std;
 
template <typename t>
t findMax(t a, t b) {
    if (a > b) {
        return a;
    }
    return b;
}
 
int main() {
    int x, y;
    float p, q;
 
    cout << "Integer values: ";
    cin >> x >> y;
 
    cout << "Float values: ";
    cin >> p >> q;
 
    cout << "Maximum integer value: " << findMax(x, y) << "\n";
    cout << "Maximum float value: " << findMax(p, q) << "\n";
 
    return 0;
 
}
