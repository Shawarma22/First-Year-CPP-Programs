#include <iostream>
#include <string>
#include <cstring>
 
using namespace std;
 
void program3() {
    class PassWord {
        string pwd;
 
    public:
        void inputPassword() {
            cout << "Enter password: ";
            cin >> pwd;
        }
 
        void checkStrength() {
            if (pwd.length() < 8) {
                cout << "Weak\n";
                return;
            }
 
            bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;
 
            for (int i = 0; i < pwd.length(); i++) {
                if (isupper(pwd[i])) hasUpper = true;
                else if (islower(pwd[i])) hasLower = true;
                else if (isdigit(pwd[i])) hasDigit = true;
                else hasSpecial = true;
            }
 
            if (hasUpper && hasLower && hasDigit && hasSpecial) {
                cout << "Strong\n";
            } else {
                cout << "Weak\n";
            }
        }
    };
 
    PassWord p;
    p.inputPassword();
    p.checkStrength();
}

int main(){
    program3();
    return 0;
}
