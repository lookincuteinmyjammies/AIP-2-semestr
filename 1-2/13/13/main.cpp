#include <iostream>
#include <cmath>

using namespace std;

float a, b;

void entering_prices() {
	cout << "price of a kilogram of sweets - ";
	cin >> a;
	cout << "price of a kilogram of cookies - ";
	cin >> b;
}

void zadA(float a, float b) {
	float sum;
	sum = a * 0.3 + b * 0.4;
}

void zadB(float a, float b) {
	float sum;
	sum = (a * 2 + b * 1.8)*3;
}

int main() {
	entering_prices();
	zadA(a,b);
	zadB(a,b);
}