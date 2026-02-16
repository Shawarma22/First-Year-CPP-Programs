#include <iostream>
using namespace std;

class book{
	public:
		char title[50], name[50];
		int isbn;
		
		void read(int n){
			cout << "Enter the details of book " << n << ":" << endl;
			cout << "Title: ";
			cin >> title;
			cout << "Name: ";
			cin >> name;
			cout << "ISBN: ";
			cin >> isbn;
		}
		void displayall(int n){
			cout << "The book details of book " << n << " are: " << endl;
			cout << "Title: " << title << endl;
			cout << "Name: " << name << endl;
			cout << "ISBN: " << isbn << endl;
		}
		void display(int x){
			if(x == isbn){
				cout << "Title: " << title << endl;
				cout << "Name: " << name << endl;
				cout << "ISBN: " << isbn << endl;
			}else{
				cout << "Book not found...";
			}
		}
};

int main (){
	int t, flag = 1;
	book arr[999];
	while(flag = 1){
		cout << "Welcome to the Library! "
		cout << "1. Add new books";
		cout << "2. Search specific books";
		cout << "3. Display all books";
		cout << "4. Delete a book";
		cout << "5. Exit"
		cout << "Enter your choice: "
		cin >> ch;
		switch(ch){
			case 1: cout << "Enter the total amount of books you want to add: ";
				cin >> t;
				for(int i=0; i<t; i++){
					int n = i+1;
					arr[i].read(n);
				}
				break;
			case 2: int sisbn;
				cout << "Enter the ISBN of the book you want to search";
				if(t == 0){
					cout << "There are no books in the library..."
					break;
				}
				cin >> sisbn;
				for(int i=0; i<t; i++){
					arr[i].display(sisbn);
				}
				break;
				
			case 3: cout << "Displaying all the books..." << endl;
				if(t == 0){
					cout << "There are no books in the library..."
					break;
				}
				for(int i=0; i<t; i++){
					int n = i+1;
					arr[i].displayall(n);
				}
				break;
			case 4: int del;
				if(t == 0){
					cout << "There are no books in the library..."
					break;
				}
				cout << "Enter the ISBN of the book you want to delete: ";
				cin >> del;
				
}

#include <iostream>
using namespace std;

class CarPark{
	int cregno, charge;
	float dur, total;
	
	public:
		void get(){
			cout << "Registration no: ";
			cin >> cregno;
			cout << "Charge per hour: ";
			cin >> charge;
			cout << "Parked duration: ";
			cin >> dur;
		}
		
		void display(){
			cout << endl << "The details for vehicle registration number: " << cregno << " is as follows..." << endl;
			cout << "The car registration no: " << cregno << endl;
			cout << "Charge per hour set: " << charge << endl;
			cout << "Total parking duration: " << dur << endl;
			total = dur * charge;
			cout << "Total charges: " << total << endl;
		}
};

int main(){
	CarPark c1, c2, c3;
	cout << "Welcome to Car Parking program!" << endl;
	cout << "Details for car no 1 ---> ";
	c1.get();
	cout << "Details for car no 2 ---> ";
	c2.get();
	cout << "Details for car no 3 ---> ";
	c3.get();
	c1.display();
	c2.display();
	c3.display();
	return 0;
}

#include <iostream>
using namespace std;

class BankAccount(){
	int accno;
	char acchname;
	float bal, dep, with;
	
	public:
		void get(){
			cout << "Account number: ";
			cin >> accno;
			cout << "Account holder name: ";
			cin >> acchname;
			cout << "Initial Balance";
			cin >> bal;
		void dep(){
			cout << "Enter the amount you want to deposit: ";
			cin >> dep;
			bal += dep;
		}
		void with{
			cout << "Enter the amount you want to withdraw: "
			cin >> with;
			bal -= with;
		}
		void disp(){
			cout << "Displaying details for account number " << accno << "..." << endl;
			cout << "Account number: " << accno << endl;
			cout << "Account holder name: " << acchname << endl;
			cout << "Total balance: " << bal << endl;
		}
	
};

int main(){
	BankAccount p1, p2, p3;
	cout << "Entering details for person 1
	p1.dep();
	
