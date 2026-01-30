//Anirudh Ramasubramanian --> 129157003 --> K1 section --> B.Tech. CSE (CS & BT)
//https://github.com/Shawarma22

#include <iostream>
using namespace std;

void getInput(int &x, int &y){
	cout << "Enter 2 numbers: ";
	cin >> x >> y;
}

void print(int &x, int &y){
	cout << x << ", " << y;
}

void swap(int &x, int &y){
	cout << "Swapping the numbers..." << endl;
	int temp = x;
	x = y;
	y = temp;
}

int main(){
	int a, b;

	getInput(a, b);
	cout << "The numbers are: " << a << ", " << b << endl;
	swap(a, b);
	cout << "The numbers after swapping are: " << a << ", " << b << endl;
	return 0;
}
