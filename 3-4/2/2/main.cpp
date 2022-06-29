#include <iostream>
#include <cmath>
using namespace std;

float x, y;

void coordinates() {
	cout << "enter the coordinate x - ";
	cin >> x;
	cout << "enter the coordinate y - ";
	cin >> y;
}

int main() {
	coordinates();
	if (((y > x * x - 2)&&(y<x)) || ((y > x * x - 2) && (y < -x))) {
		cout << "in the range";
	}
	else
	{
		cout << "not in the range";
	}
}