#include <iostream>
using namespace std;


void bsort(int arr[], int n){
	bool x;
	for (int i = 0; i < n - 1; i++){
		x = false;
        	for (int j = 0; j < n - i - 1; j++){
			if (arr[j] > arr[j + 1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				x = true;
			}
		}
		if (!x){
		       	break;
		}
	}
}


void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main(){
	int n;
	cout << "Enter the number of elements: ";
	cin >> n;
	int arr[999];
	for (int i = 0; i < n; i++){
		cout << "Element " << i + 1 << ": ";
		cin >> arr[i];
	}
	cout << "Unsorted array: ";
	printArray(arr, n);
	bsort(arr, n);
	cout << "Sorted array: ";
	printArray(arr, n);
	return 0;
}
