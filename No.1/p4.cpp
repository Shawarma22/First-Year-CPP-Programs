#include <iostream>
#include <cmath>
using namespace std;

double factc(int n){
   	double fact = 1;
	for(int i = 1; i <= n; i++){
		fact *= i;
	}return fact;
}

int main(){
	int n, iter = 0, i = 1, sign = 1;
	double x, sin = 0.0;
	cout << "Enter x value in sin(x) and total number of terms: ";
	cin >> x >> n;
	cout << "Caclulating sin(" << x << ") value with " << n << " terms...\n";
	while(iter < n){
		sin += sign * (pow(x, i) / factc(i));
		sign *= -1;
		iter++;
		i += 2;
	}cout << "Approximate sin(" << x << ") value is: " << sin << endl;
	return 0;
}
