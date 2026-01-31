//Anirudh Ramasubramanian --> 129157003 --> K1 section --> B.Tech. CSE (CS & BT)
//https://github.com/Shawarma22

#include <iostream>
using namespace std;

void printSequence(int a[], int n, int n1 = 0, int n2 = 1){
	int i = 1;
	
	a[0] = n1;
	a[1] = n2;
	
	cout << "The Fibonacci sequence is: " << endl;
	cout << a[0] << " --> " << a[1];
	while(i <= n-2){
		a[i+1] = a[i] + a[i-1];
		cout << " --> " << a[i+1];
		i++;
	}
}

int main(){
	int a[99];
	int n, n1, n2;
	char ch;
	
	cout << "Enter the total number of terms in the Fibonacci series: ";
	cin >> n;
	cout << "Do you want to give the first 2 terms of your sequence? (y or n): ";
	cin >> ch;
	
	if(ch == 'y'){
		cout << "Enter the first 2 terms: ";
		cin >> n1 >> n2;
		printSequence(a, n, n1, n2);
	}else{
		cout << "Using first 2 terms as default (0 and 1)..." << endl;
		printSequence(a, n);
	}

	cout << endl;
	return 0;
}
