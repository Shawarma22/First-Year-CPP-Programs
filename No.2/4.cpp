//Anirudh Ramasubramanian --> 129157003 --> K1 section --> B.Tech. CSE (CS & BT)
//https://github.com/Shawarma22

#include <iostream>
using namespace std;

inline float add(float a, float b){
        return a + b;
}

inline float sub(float a, float b){
        return a - b;
}

inline float mult(float a, float b){
        return a * b;
}

inline float div(float a, float b){
        return a / b;
}

int main(){
        int ch;
        float a, b;

        cout << "Menu: 1. Add 2. Sub 3. Mult 4. Div 5. Exit" << endl;
        cout << "Choose Op: ";
        cin >> ch;

        if(ch == 5){
		return 0;
	}
	
        cout << "Enter Values: ";
        cin >> a >> b;

        cout << "Result: ";
        switch(ch){
        case 1:
                cout << add(a, b);
                break;
        case 2:
                cout << sub(a, b);
                break;
        case 3:
                cout << mult(a, b);
                break;
        case 4:
                if(b != 0){
			cout << div(a, b);
		}else cout << "Error";
                break;
        default:
                cout << "Invalid";
        }
        cout << endl;

        return 0;
}
