#include <iostream>
#include <string>
using namespace std;

class Student {
	public:
		int rollNumber;
		string name;
		int marks[5];
		double average;
		string grade;
		
		void input() {
			cout << "Roll Number: ";
			cin >> rollNumber;
			cout << "Name: ";
			cin >> name;
			cout << "Marks: ";
			for(int i=0; i<5; i++) {
				cin >> marks[i];
				while(marks[i]<0 || marks[i]>100) {
					cout << "Invalid. Enter mark between 0 and 100: ";
					cin >> marks[i];
				}
			}
		}
		
		void calculate() {
			int sum=0;
			
			for(int i=0; i<5; i++) {
				sum=sum+marks[i];
			}
			
			average=sum/5.0;
			
			if(average>=91) {
				grade="S";
			} else if(average>=86) {
				grade="A+";
			} else if(average>=75) {
				grade="A";
			} else if(average>=66) {
				grade="B";
			} else if(average>=55) {
				grade="C";
			} else if(average>=50) {
				grade="D";
			} else {
				grade="F";
			}
		}
		
		void display() {
		cout << "\nAverage: " << average << "\n";
		cout << "Grade: " << grade << "\n\n";
		}
};
int main() {
	int n;
	Student s[100];
	
	cout << "Enter number of students: ";
	cin >> n;
	cout << "\n";
	
	for(int i=0; i<n; i++) {
		s[i].input();
		s[i].calculate();
		s[i].display();
	}
	
	return 0;
}
