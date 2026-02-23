#include <iostream>
#include <string>
using namespace std;

class TNEB {
	public:
		int ebNumber;
		string consumerName;
		string consumerType;
		int unitsConsumed;
		double billAmount;
		
		void input() {
			cout << "EB Number: ";
			cin >> ebNumber;
			cout << "Consumer Name: ";
			cin >> consumerName;
			cout << "Consumer Type: ";
			cin >> consumerType;
			cout << "Units Consumed: ";
			cin >> unitsConsumed;
		}
		
		void calculate() {
			if(consumerType=="Domestic" || consumerType=="domestic") {
				if(unitsConsumed<=100) {
					billAmount=0;
				} else if(unitsConsumed<=200) {
					billAmount=(unitsConsumed-100)*1.5;
				} else if(unitsConsumed<=500) {
					billAmount=150+(unitsConsumed-200)*3.0;
				} else {
				billAmount=1050+(unitsConsumed-500)*6.6;
				}
			} else {
				billAmount=unitsConsumed*8.0;
			}
		}
		
		void display() {
		cout << "\nEB Number: " << ebNumber<<"\n";
		cout << "Consumer Name: " << consumerName<<"\n";
		cout << "Consumer Type: " << consumerType<<"\n";
		cout << "Units Consumed: " << unitsConsumed<<"\n";
		cout << "Bill Amount = Rs. " << billAmount<<"\n";
		}
};
int main() {
	int n;
	TNEB consumers[100];
	
	cout << "Enter number of consumers: ";
	cin >> n;
	cout << "\n";

	for(int i=0; i<n; i++) {
		consumers[i].input();
		consumers[i].calculate();
	}
	
	cout << "\n--- Electricity Bills ---\n";
	
	for(int i=0; i<n; i++) {
		consumers[i].display();
	}
	
	return 0;
}
