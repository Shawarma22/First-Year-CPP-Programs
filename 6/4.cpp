#include <iostream>
#include <string>
#include <cstring>
 
using namespace std;
 
template <class T>
class Array {
    T arr[100];
    int size;
    int capacity;
 
public:
    Array() {
        size = 0;
        capacity = 100;
    }
 
    void insertAtBeginning(T val) {
        if (size < capacity) {
            for (int i = size; i > 0; i--) {
                arr[i] = arr[i - 1];
            }
            arr[0] = val;
            size++;
        }
    }
 
    void insertAtEnd(T val) {
        if (size < capacity) {
            arr[size] = val;
            size++;
        }
    }
 
    void deleteFromBeginning() {
        if (size > 0) {
            for (int i = 0; i < size - 1; i++) {
                arr[i] = arr[i + 1];
            }
            size--;
        }
    }
 
    void deleteFromEnd() {
        if (size > 0) {
            size--;
        }
    }
 
    void emptyArray() {
        size = 0;
    }
 
    void display() {
        if (size == 0) {
            cout << "Array is empty.\n";
            return;
        }
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
};
 
void program4() {
    Array<int> myArr;
    int choice;
    int val;
 
    do {
        cout << "\n1. Insert at Beginning\n2. Insert at End\n3. Delete from Beginning\n4. Delete from End\n5. Empty Array\n6. Display\n7. Exit\nChoice: ";
        cin >> choice;
 
        if (choice == 1) {
            cout << "Enter value: ";
            cin >> val;
            myArr.insertAtBeginning(val);
        } else if (choice == 2) {
            cout << "Enter value: ";
            cin >> val;
            myArr.insertAtEnd(val);
        } else if (choice == 3) {
            myArr.deleteFromBeginning();
        } else if (choice == 4) {
            myArr.deleteFromEnd();
        } else if (choice == 5) {
            myArr.emptyArray();
        } else if (choice == 6) {
            myArr.display();
        }
    } while (choice != 7);
}

int main(){
    program4();
    return 0;
}