#include <iostream>
#include <cmath>

using namespace std;

float a;

void square(float a) {
	a = a * a;
	cout << "������� ����� � = ", a;
}

void cube(float a) {
	a = a * a * a;
	cout << "��� ����� � = ", a;
}

int main() {
	cin >> a;
	square(a);
	cube(a);
}