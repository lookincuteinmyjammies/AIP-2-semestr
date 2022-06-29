#include <iostream>
#include <cmath>

using namespace std;

float a, b; //катеты прямоугольного треугольника

void areatriangle(float a, float b) {
	float S;
	S = (a * b) / 2;
}

void perimetertriangle(float a, float b) {
	float P;
	P = sqrt(a * a + b * b) + a + b;
}

int main() {
	cin >> a, b;
	areatriangle(a, b);
	perimetertriangle(a, b);
}
