#include <iostream>
#include <cmath>
using namespace std;

int factc(int n){
	int fact;
	for(int i = 1; i <= n; i++){
		fact *= i;
	}return fact;
}

int main(){
	int x, n, iter = 1, i = 1, sign = 1;
	double sin = 0.0;
	cout << "Enter x value in sin(x) and total number of terms: ";
	cin >> x >> n;
	cout << "Caclulating sin(" << x << ") value with " << n << " terms...\n";
	while(iter < n){
		if(iter % 2 == 0){
			sign = -1;
		}else{
			sign = 1;
		}
		sin += sign * (pow(x, i) / factc(i));
		iter++;
		i += 2;
	}cout << "Approximate sin(" << x << ") value is: " << sin << endl;
	return 0;
}
