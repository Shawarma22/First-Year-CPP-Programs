#include <iostream>
#include <string>
#include <cstring>
 
using namespace std;
 
template <typename T>
void bubbleSort(T arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
 
template <typename T>
void displayArray(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
 
void program2() {
    int intArr[] = {64, 34, 25, 12, 22, 11, 90};
    int intSize = 7;
    
    float floatArr[] = {3.14, 2.71, 1.41, 1.61, 5.55};
    int floatSize = 5;
 
    bubbleSort(intArr, intSize);
    cout << "Sorted Integer Array: ";
    displayArray(intArr, intSize);
 
    bubbleSort(floatArr, floatSize);
    cout << "Sorted Float Array: ";
    displayArray(floatArr, floatSize);
}

int main(){
    program2();
    return 0;
}