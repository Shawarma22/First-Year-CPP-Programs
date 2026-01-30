//Anirudh Ramasubramanian --> 129157003 --> K1 section --> B.Tech. CSE (CS & BT)
//https://github.com/Shawarma22

#include <iostream>
using namespace std;

float computeVolume(float r = 4.5, float h = 7){
        return 3.14159 * r * r * h;
}

int main(){
        float r, h;

        cout << "Volume (default radius --> 4.5 and height --> 7.0): " << computeVolume() << endl;

        cout << "Enter height: ";
        cin >> h;
        cout << "Volume (radius = 4.5): " << computeVolume(4.5, h) << endl;

        cout << "Enter radius and height: ";
        cin >> r >> h;
        cout << "Volume: " << computeVolume(r, h) << endl;

        return 0;
}
