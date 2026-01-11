#include <iostream>
using namespace std;

void paydet(int salary){
	float gp, np;
	if(salary >= 10000){
		gp = salary + (0.9) * salary + (0.2) * salary;
		np = gp - 1000;
	}else if(salary >= 5000 && salary < 10000){
		gp = salary + (0.8) * salary + (0.15) * salary;
		np = gp - 750;
	}else{
		gp = salary + (0.7) * salary + (0.1) * salary;
		np = gp - 500;
	}cout << "Results:\n";
	cout << "Salary: " << salary << endl;
	cout << "Gross Pay: " << gp << endl;
	cout << "Net Pay: " << np << endl;
}

int main(){
	int salary;
	cout << "Enter basic Salary: ";
	cin >> salary;
	cout << "Calculating Gross Pay and Net Pay...\n";
	paydet(salary);
	return 0;
}
