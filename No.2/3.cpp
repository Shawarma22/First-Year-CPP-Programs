//Anirudh Ramasubramanian --> 129157003 --> K1 section --> B.Tech. CSE (CS & BT)
//https://github.com/Shawarma22

#include <iostream>
using namespace std;

void sort(int a[], int n){
	for(int i = 0; i < n - 1; i++){
		for(int j = 0; j < n - i - 1; j++){
			if(a[] > a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}

void sort(float a[], int n){
        for(int i = 0; i < n - 1; i++){
                for(int j = 0; j < n - i - 1; j++){
                        if(a[j] > a[j+1]){
                                float temp = a[j];
                                a[j] = a[j+1];
                                a[j+1] = temp;
                        }
                }
        }
}

void sort(char a[], int n){
        for(int i = 0; i < n - 1; i++){
                for(int j = 0; j < n - i - 1; j++){
                        if(a[j] > a[j+1]){
                                char temp = a[j];
                                a[j] = a[j+1];
                                a[j+1] = temp;
                        }
                }
        }
}

int main() {
        int ch, n;
        int i_arr[99];
        float f_arr[99];
        char c_arr[99];

        cout << "Menu: 1. Integer 2. Float 3. Character 4. Exit" << endl;
        cout << "Choose type: ";
        cin >> ch;

        if(ch == 4){
	       	return 0;
	}

        cout << "Enter no. of elements: ";
        cin >> n;
        cout << "Enter elements: ";

        switch (ch) {
        case 1:
                for (int i = 0; i < n; i++){
			cin >> i_arr[i];
		}sort(i_arr, n);
                cout << "Sorted array: ";
                for(int i = 0; i < n; i++){
			cout << i_arr[i] << " ";
		}break;
        case 2:
                for(int i = 0; i < n; i++){
			cin >> f_arr[i];
		}sort(f_arr, n);
                cout << "Sorted array: ";
                for(int i = 0; i < n; i++){
			cout << f_arr[i] << " ";
		}break;
        case 3:
                for(int i = 0; i < n; i++){
			cin >> c_arr[i];
		}sort(c_arr, n);
                cout << "Sorted array: ";
                for(int i = 0; i < n; i++){
			cout << c_arr[i] << " ";
		}break;
        default:
                cout << "Invalid choice";
        }
        cout << endl;

        return 0;
}
