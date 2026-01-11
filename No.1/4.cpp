#include <iostream>
using namespace std;

void row(int arr[][99], int r, int c){
	for(int i = 0 ; i < r ; i++){
		int sum =  0;
		for(int j = 0 ; j < c ; j++){
			sum += arr[i][j];
		}cout << "Row " << i+1 << " sum = " << sum << "\n";
	}	
}

void clm(int arr[][99], int r, int c){
	for(int j = 0 ; j < c ; j++){
		int sum =  0;
		for(int i = 0 ; i < r ; i++){
			sum += arr[i][j];
		}cout << "Column " << j+1 << " sum = " << sum << "\n";
	}
}

void getarr(int arr[][99], int r, int c){
	for(int i = 0 ; i < r ; i++){
		for(int j = 0 ; j < c ; j++){
			cout << "Enter element (" << i << ", " << j << "): ";
			cin >> arr[i][j];
		}
	}
}

int main(){
	int r, c, arr[99][99];
	cout << "Enter the rows and column count of the matrix: ";
	cin >> r >> c;
	getarr(arr, r, c);
	cout << "Calculating the row and column wise sum..." << endl;
	row(arr, r, c);
	clm(arr, r, c);
	return 0;
}

