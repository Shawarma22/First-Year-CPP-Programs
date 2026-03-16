#include <iostream>
#include <string>
#include <cstring>
 
using namespace std;
 
class A {
    string str;
public:
    A(string s) {
        str = s;
    }
    void isPalindrome() {
        int left = 0;
        int right = str.length() - 1;
        bool pal = true;
        while (left < right) {
            if (str[left] != str[right]) {
                pal = false;
                break;
            }
            left++; right--;
        }
        if (pal) cout << "Class A: String is a palindrome.\n";
        else cout << "Class A: String is not a palindrome.\n";
    }
};
 
class B {
    char arr[100];
public:
    B(const char* c) {
        strcpy(arr, c);
    }
    void isPalindrome() {
        int left = 0;
        int right = strlen(arr) - 1;
        bool pal = true;
        while (left < right) {
            if (arr[left] != arr[right]) {
                pal = false;
                break;
            }
            left++; right--;
        }
        if (pal) cout << "Class B: Char array is a palindrome.\n";
        else cout << "Class B: Char array is not a palindrome.\n";
    }
};
 
void program4() {
    A objA("racecar");
    objA.isPalindrome();
 
    B objB("hello");
    objB.isPalindrome();
}

int main(){
    program4();
    return 0;
}