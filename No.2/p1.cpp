#include <iostream>
using namespace std;

void bestofTwoCIA(int cia1[], int cia2[], int n, int result[]) {
    for(int i = 0; i < n; i++) {
        if(cia1[i] > cia2[i]) {
            result[i] = cia1[i];
        } else {
            result[i] = cia2[i];
        }
    }
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int cia1[n], cia2[n], result[n];

    cout << "Enter CIA 1 marks for " << n << " students: ";
    for(int i = 0; i < n; i++) {
        cin >> cia1[i];
    }

    cout << "Enter CIA 2 marks for " << n << " students: ";
    for(int i = 0; i < n; i++) {
        cin >> cia2[i];
    }

    bestofTwoCIA(cia1, cia2, n, result);

    cout << "Best of two marks: ";
    for(int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
