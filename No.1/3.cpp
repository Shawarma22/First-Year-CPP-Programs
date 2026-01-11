#include <iostream>
using namespace std;

void count(int arr[], int n){
	int evenc, oddc, zeroc;
	for(int i = 0;i < n;i++){
		if(arr[i] == 0){
			zeroc++;
		}else if(arr[i] % 2 == 0){
			evenc++;
		}else{
			oddc++;
		}
	}
	cout << "Even number count = " << evenc << endl;
	cout << "Odd number count = " << oddc << endl;
	cout << "Zero count = " << zeroc << endl;
}

int main(){
	cout << "Enter total no of array elements: ";
	int n, arr[9999];
	cin >> n;
	for(int i = 0;i < n; i++){
		cout << "Enter element " << i+1 << ": ";
		cin >> arr[i];
	}cout << "Calculating total number of even and odd elements..." << "\n";
	count(arr, n);
	return 0;
}
