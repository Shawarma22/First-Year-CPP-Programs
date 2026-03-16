#include <iostream>
#include <string>
#include <cctype>
 
using namespace std;
 
class StringManipulator {
    string s;
 
public:
    StringManipulator(string v) {
        s = v;
    }
 
    void capitalize() {
        for (int i = 0; i < s.length(); i++) {
            s[i] = toupper(s[i]);
        }
    }
 
    void toSentenceCase() {
        if (s.length() > 0) {
            s[0] = toupper(s[0]);
            for (int i = 1; i < s.length(); i++) {
                s[i] = tolower(s[i]);
            }
        }
    }
 
    void toTitleCase() {
        bool w = true;
        for (int i = 0; i < s.length(); i++) {
            if (isspace(s[i])) {
                w = true;
            } else if (w) {
                s[i] = toupper(s[i]);
                w = false;
            } else {
                s[i] = tolower(s[i]);
            }
        }
    }
 
    string getString() {
        return s;
    }
 
    void putString() {
        cout << "Updated String:\n" << s << "\n";
    }
};
 
int main() {
    string v;
    cout << "Enter string:\n";
    getline(cin, v);
 
    StringManipulator m(v);
    int c;
 
    do {
        cout << "Menu:\n";
        cout << "1. Capitalize\n";
        cout << "2. Sentence Case\n";
        cout << "3. Title Case\n";
        cout << "4. Exit\n";
        cout << "Choice: ";
        cin >> c;
 
        if (c == 1) {
            m.capitalize();
            m.putString();
        } else if (c == 2) {
            m.toSentenceCase();
            m.putString();
        } else if (c == 3) {
            m.toTitleCase();
            m.putString();
        }
    } while (c != 4);
 
    return 0;
}