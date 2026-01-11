#include <iostream>
using namespace std;

void mult(int a[][99], int b[][99], int c[][99], int r1, int c1, int r2, int c2){
	for (int i = 0; i < r1; i++){
		for (int j = 0; j < c2; j++) {
			c[i][j] = 0;
		}
	}

	for (int i = 0; i < r1; i++){
		for (int j = 0; j < c2; j++){
			for (int k = 0; k < c1; k++){
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
}

void display(int mat[][99], int r, int c) {
	for (int i = 0; i < r; i++){
		for (int j = 0; j < c; j++){
			cout << mat[i][j] << "\t";
		}
		cout << endl;
	}
}

int main(){
	int a[99][99], b[99][99], c[99][99];
	int r1, c1, r2, c2;
	cout << "Enter rows and columns for first matrix: ";
	cin >> r1 >> c1;
	cout << "Enter rows and columns for second matrix: ";
	cin >> r2 >> c2;
	if(c1 != r2){
		cout << "Multiplication not possible, exiting program..." << endl;
		return 0;
	}cout << "Matrix 1: "  << endl;
	for(int i = 0; i < r1; i++){
		for (int j = 0; j < c1; j++){
			cout << "Enter element (" << i + 1 << ", " << j + 1 << "): ";
			cin >> a[i][j];
		}
	}cout << "Matrix 2: "  << endl;
	for(int i = 0; i < r2; i++){
		for (int j = 0; j < c2; j++){
			cout << "Enter element (" << i + 1 << ", " << j + 1 << "): ";
			cin >> b[i][j];
		}
	}
	mult(a, b, c, r1, c1, r2, c2);
	cout << "\nResultant Matrix:" << endl;
	display(c, r1, c2);
	return 0;
}
