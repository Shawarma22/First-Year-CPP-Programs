#include <iostream>
#include <iomanip>
using namespace std;

float val(int q, int d, int n){
	int c = (q * 25) + (d * 10) + (n * 5);
	float dol = c / 100.0;
	return dol;
}

int main(){
	int q, d, n;
	cout << "Enter the number of Quarters, Dimes and Nickels respectively";
	cin >> q >> d >> n;
	float dol = val(q, d, n);
	cout << fixed << setprecision(2);
	cout << "The overall value of the collection is $" << dol << endl;
	return 0;
}
