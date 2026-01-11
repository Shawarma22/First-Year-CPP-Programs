#include <iostream>
using namespace std;

void f2c(float t){
	float c;
	cout << "Converting...\n";
	c = (.55555555) * (t - 32);
	cout << "Converted: F = " << t << " ----> C = " << c << "\n";
}

void c2f(float t){
	float f;
	cout << "Converting...\n";
	f = t * (1.8) + 32;
	cout << "Converted: C = " << t << " ----> F = " << f << "\n";
}

int main(){
	int n;
	float t;
	cout << "Enter the appropriate option (1 --> Fahrenheit to Celsius,  2 --> Celsius to Fahrenheit): ";
	cin >> n;
	if(n == 1){
		cout << "Enter temperature in Fahrenheit: ";
		cin >> t;
		f2c(t);
	}else if(n == 2){
		cout << "Enter temperature in Celsius: ";
		cin >> t;
		c2f(t);
	}else{
		cout << "Wrong option entered, exiting program...";
	
	}
}

