#include <iostream>
#include <string>
#include <cstring>
 
using namespace std;
 
void program2() {
    string message;
    cout << "Enter message: ";
    cin.ignore();
    getline(cin, message);
 
    int a = 0, e = 0, i_v = 0, o = 0, u = 0, totalVowels = 0;
    int wordCount = 1;
 
    for (int i = 0; i < message.length(); i++) {
        char ch = tolower(message[i]);
        if (ch == 'a') { a++; totalVowels++; }
        else if (ch == 'e') { e++; totalVowels++; }
        else if (ch == 'i') { i_v++; totalVowels++; }
        else if (ch == 'o') { o++; totalVowels++; }
        else if (ch == 'u') { u++; totalVowels++; }
 
        if (ch == ' ' && message[i-1] != ' ') {
            wordCount++;
        }
    }
    if (message.empty()) wordCount = 0;
 
    cout << "Total Vowels: " << totalVowels << "\n";
    cout << "a: " << a << ", e: " << e << ", i: " << i_v << ", o: " << o << ", u: " << u << "\n";
 
    int maxCount = a;
    char maxVowel = 'a';
    if (e > maxCount) { maxCount = e; maxVowel = 'e'; }
    if (i_v > maxCount) { maxCount = i_v; maxVowel = 'i'; }
    if (o > maxCount) { maxCount = o; maxVowel = 'o'; }
    if (u > maxCount) { maxCount = u; maxVowel = 'u'; }
 
    cout << "Highest vowel: " << maxVowel << "\n";
    cout << "Word count: " << wordCount << "\n";
 
    string keyword;
    cout << "Enter keyword to search: ";
    cin >> keyword;
 
    int pos = message.find(keyword);
    if (pos != -1) {
        cout << "Keyword found at position: " << pos << "\n";
    } else {
        cout << "Keyword not found.\n";
    }
}

int main(){
    program2();
    return 0;
}