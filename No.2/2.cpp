//Anirudh Ramasubramanian --> 129157003 --> K1 section --> B.Tech. CSE (CS & BT)
//https://github.com/Shawarma22

#include <iostream>
using namespace std;

int calculateVolume(int a){
	return a * a * a;
}

int calculateVolume(int l, int b, int h){
	return l * b * h;
}

float calculateVolume(int r, int h){
	return 3.14159265 * r * r * h;
}

int main(){
	int a;
	int l, b, h;
	int r;

	cout << "Enter side value of Cube: ";
	cin >> a;
	cout << "The volume of the cube is: " << calculateVolume(a) << endl;

	cout << "Enter Length, Breadth and Height values of the Rectangle Box: ";
	cin >> l >> b >> h;
	cout << "The volume of the Rectangle Box: " << calculateVolume(l, b, h) << endl;

	cout << "Enter Radius and Height of the Cylinder: ";
	cin >> r >> h;
	cout << "The volume of the Cylinder is: " << calculateVolume(r, h) << endl;

	return 0;
}
