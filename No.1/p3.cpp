#include <iostream>
using namespace std;

void arithop(char op, int a, int b){
	switch(op){
		case '+': cout << a << " + " << b << " = " << a + b;
			  break;
		case '-': cout << a << " - " << b << " = " << a - b;
			  break;
		case '*': cout << a << " * " << b << " = " << a * b;
			  break;
		case '/': cout << a << " / " << b << " = " << (float)(a / b);
			  break;
		default: cout << "Invalid operator entered, exiting prograam...";
	}
}

int main(){
	int a, b;
	char op;
	cout << "Enter 2 numbers to be operated on: ";
	cin >> a >> b;
	cout << "Enter the operator you want to use: ";
	cin >> op;
	cout << "Calculating...\n";
	arithop(op, a, b);
	return 0;
}
