#include <iostream>
#include <string>
using namespace std;

class Car {
	public:
		int carID;
		string make;
		string model;
		int year;
		int rentalPrice;
		bool availabilityStatus;
		
		void input() {
			cout << "Car ID: ";
			cin >> carID;
			cout << "Make: ";
			cin >> make;
			cout << "Model: ";
			cin >> model;
			cout << "Year: ";
			cin >> year;
			cout << "Rental Price: ";
			cin >> rentalPrice;
			availabilityStatus = true;
		}
		
		void display() {
			if(availabilityStatus) {
				cout << "Car ID: " << carID << endl;
				cout << "Make: " << make << endl;
				cout << "Model: " << model << endl;
				cout << "Rental Price: " << rentalPrice << "\n\n";
			}
		}
};
int main() {
	int n;
	
	cout << "Number of cars: ";
	cin >> n;
	Car cars[100];
	for(int i=0; i<n; i++) {
		cout << "\n";
		cars[i].input();
	}
	
	int rentID;
	
	cout << "\nEnter car ID to rent: ";
	cin >> rentID;
	for(int i=0; i<n; i++) {
		if(cars[i].carID==rentID) {
			cars[i].availabilityStatus=false;
			cout<<"\nCar rented successfully.\n";
			break;
		}
	}
	
	cout<<"\nAvailable Cars:\n";
	for(int i=0; i<n; i++) {
		cars[i].display();
	}
	return 0;
}
