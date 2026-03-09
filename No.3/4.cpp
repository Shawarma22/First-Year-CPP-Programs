#include <iostream>
#include <string>
#include <cstring>

using namespace std;

/*
 * 1. Write a program to manage car rentals using a class Car with attributes carID,
 * [span_0](start_span)make, model, year, rentalPrice, and availabilityStatus.[span_0](end_span)
 * Use an array of objects to store car details. Provide options to input car details,
 * [span_1](start_span)rent a car using car ID, and display all available cars.[span_1](end_span)
 */
void program1() {
    class Car {
    public:
        int carID;
        string make;
        string model;
        int year;
        float rentalPrice;
        bool availabilityStatus;

        void inputDetails() {
            cout << "Enter Car ID, Make, Model, Year, Rental Price, Availability (1 for yes, 0 for no): ";
            cin >> carID >> make >> model >> year >> rentalPrice >> availabilityStatus;
        }

        void displayAvailable() {
            if (availabilityStatus) {
                cout << "ID: " << carID << " | " << make << " " << model << " (" << year << ") | $" << rentalPrice << "\n";
            }
        }
    };

    Car cars[3];
    int choice;

    do {
        cout << "\n1. Input Car Details\n2. Rent a Car\n3. Display Available Cars\n4. Exit\nChoice: ";
        cin >> choice;

        if (choice == 1) {
            for (int i = 0; i < 3; i++) {
                cars[i].inputDetails();
            }
        } else if (choice == 2) {
            int rentID;
            cout << "Enter Car ID to rent: ";
            cin >> rentID;
            bool found = false;
            for (int i = 0; i < 3; i++) {
                if (cars[i].carID == rentID && cars[i].availabilityStatus) {
                    cars[i].availabilityStatus = false;
                    cout << "Car rented successfully!\n";
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Car not available or invalid ID.\n";
        } else if (choice == 3) {
            cout << "Available Cars:\n";
            for (int i = 0; i < 3; i++) {
                cars[i].displayAvailable();
            }
        }
    } while (choice != 4);
}

/*
 * 2. Write a program to create a class Employee with attributes employee_id, name,
 * designation(e.g., "Manager," "Team Lead," "Engineer"), salary, bonus, and
 * [span_2](start_span)totalCompensation.[span_2](end_span) Accept details for multiple employees using an array of
 * [span_3](start_span)objects.[span_3](end_span) Calculate bonus based on designation (Manager 15%, Team Lead 12%
 * [span_4](start_span)and Engineer 10%), and display employee details.[span_4](end_span)
 */
void program2() {
    class Employee {
    public:
        int employee_id;
        string name;
        string designation;
        float salary;
        float bonus;
        float totalCompensation;

        void inputDetails() {
            cout << "Enter ID, Name, Designation (Manager/TeamLead/Engineer), Salary: ";
            cin >> employee_id >> name >> designation >> salary;
        }

        void calculateBonusAndCompensation() {
            if (designation == "Manager") {
                bonus = salary * 0.15;
            } else if (designation == "TeamLead") {
                bonus = salary * 0.12;
            } else if (designation == "Engineer") {
                bonus = salary * 0.10;
            } else {
                bonus = 0;
            }
            totalCompensation = salary + bonus;
        }

        void displayDetails() {
            cout << employee_id << " | " << name << " | " << designation << " | Salary: " << salary 
                 << " | Bonus: " << bonus << " | Total: " << totalCompensation << "\n";
        }
    };

    Employee emp[3];

    for (int i = 0; i < 3; i++) {
        emp[i].inputDetails();
        emp[i].calculateBonusAndCompensation();
    }

    cout << "\nEmployee Details:\n";
    for (int i = 0; i < 3; i++) {
        emp[i].displayDetails();
    }
}

/*
 * 3. Write a program to read a line of text using a string object and perform the
 * following operations:
 * [span_5](start_span)Find empty spaces in the given text.[span_5](end_span) [span_6](start_span)If only one space exists between words, add one extra space.[span_6](end_span)
 * [span_7](start_span)If more than two spaces exist, reduce them to two spaces.[span_7](end_span)
 */
void program3() {
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

/*
 * 4. Write a C++ program for a chat application to analyze a message using string
 * operations:
 * a) Count total vowels, display individual vowel counts, and identify the vowel
 * [span_8](start_span)with the highest count.[span_8](end_span)
 * b) Count the number of words in the message.
 * [span_9](start_span)c) Check whether a given keyword is present and display its starting position.[span_9](end_span)
 */
void program4() {
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

/*
 * 5. Write a C++ program to create a class named PassWord to check the strength
 * [span_10](start_span)of a password.[span_10](end_span) The class should store the password using a string object and
 * provide member functions to validate the password based on the following
 * rules:
 * [span_11](start_span)Minimum length of 8 characters[span_11](end_span)
 * At least one uppercase letter, one lowercase letter, one digit, one special character.
 * [span_12](start_span)The program should display whether the entered password is Strong or Weak.[span_12](end_span)
 */
void program5() {
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

/*
 * 6. Define two classes A and B. Class A stores a string and class B stores a
 * [span_13](start_span)character array.[span_13](end_span) Initialize them using constructors and define isPalindrome()
 * [span_14](start_span)functions to check whether the stored strings are palindromes.[span_14](end_span)
 */
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

void program6() {
    A objA("racecar");
    objA.isPalindrome();

    B objB("hello");
    objB.isPalindrome();
}

/*
 * 7. Write a program to sort an array using Bubble Sort implemented as a generic
 * [span_15](start_span)function.[span_15](end_span) [span_16](start_span)The function should work for both integer and floating-point arrays.[span_16](end_span)
 */
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

void program7() {
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

/*
 * 8. Write a program to perform insert, delete, and empty operations on an array
 * [span_17](start_span)using a generic class template.[span_17](end_span) The program should support storing, integer,
 * [span_18](start_span)character and float values Provide a menu-driven interface.[span_18](end_span)
 */
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

void program8() {
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

int main() {
    int choice;
    cout << "Enter Program Number to run (1-8) or 0 to exit: ";
    cin >> choice;

    switch(choice) {
        case 1: program1(); break;
        case 2: program2(); break;
        case 3: program3(); break;
        case 4: program4(); break;
        case 5: program5(); break;
        case 6: program6(); break;
        case 7: program7(); break;
        case 8: program8(); break;
        default: cout << "Exiting...\n";
    }
    return 0;
}
