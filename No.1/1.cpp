//Anirudh Ramasubramanian --> 129157003 --> K1 section --> B.Tech. CSE (CS & BT)
//https://github.com/Shawarma22

#include <iostream>
using namespace std;

int perf(int a){
	int sum = 0;
	for(int i = 1;i < a;i++){
		if (a % i == 0){
			sum += i;
		}
	}
	return sum;
}

int main(){
	int a;
	cout << "Enter the number to check if its a perfect number: ";
	cin >> a;
	int b = perf(a);
	if(a == b){
		cout << "The number " << a << " is a perfect number" << endl;
	}else{
		cout << "The number " << a << " is not a perfect number" << endl;
	}
	return 0;
}
