//Anirudh Ramasubramanian --> 129157003 --> K1 section --> B.Tech. CSE (CS & BT)
//https://github.com/Shawarma22

#include <iostream>
using namespace std;

double powerfun(double n, int p = 2){
        double x = 1.0;
        for(int i = 0; i < p; i++){
                x *= n;
        }
        return x;
}

int main(){
        double n;
        int p;

        cout << "Enter number (n): ";
        cin >> n;

        cout << "Result with default power (Square): " << powerfun(n) << endl;

        cout << "Enter power (p): ";
        cin >> p;
        cout << "Result with power " << p << ": " << powerfun(n, p) << endl;

        return 0;
}
