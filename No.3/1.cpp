#include <iostream>
using namespace std;

class Matrix {
	public:
		int data[10][10];
		int rows;
		int cols;
		
		void getMatrix() {
			cout << "Enter rows and columns: ";
			cin >> rows >> cols;
			cout << "Enter matrix elements:\n";
			for(int i=0; i<rows; i++) {
				for(int j=0; j<cols; j++) {
					cout << "Enter element (" << i+1 << "," << j+1 << "):";
					cin >> data[i][j];
				}
			}
		}
		
		void diagonalSum() {
			int sum = 0;
			for(int i=0; i<rows; i++) {
				sum = sum + data[i][i];
			}
			cout << "\nDiagonal Sum = "<< sum << "\n";
		}
		
		void scalarMultiply(int scalar) {
			cout<<"\nScalar Multiplication Result\n";
			for(int i=0; i<rows; i++) {
				for(int j=0; j<cols; j++) {
					cout << (data[i][j]*scalar) << "\t";
				}
				cout << "\n";	
			}
		}
};

int main() {
	Matrix m;
	m.getMatrix();
	int scalar;
	
	cout<<"Enter a scalar value : ";
	cin>>scalar;
	m.diagonalSum();
	m.scalarMultiply(scalar);
	return 0;
}
