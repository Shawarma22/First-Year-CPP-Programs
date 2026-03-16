#include <iostream>
#include <string>
#include <cstring>
 
using namespace std;
 
void program1() {
    string text;
    string result = "";
    
    cout << "Enter a line of text: ";
    cin.ignore();
    getline(cin, text);
 
    int spaceCount = 0;
 
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            spaceCount++;
        } else {
            if (spaceCount == 1) {
                result += "  ";
            } else if (spaceCount >= 2) {
                result += "  ";
            }
            spaceCount = 0;
            result += text[i];
        }
    }
 
    if (spaceCount == 1) result += "  ";
    else if (spaceCount >= 2) result += "  ";
 
    cout << "Modified text: " << result << "\n";
}

int main(){
    program1();
    return 0;
}