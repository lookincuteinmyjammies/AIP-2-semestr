#include <iostream>
#include <array>
#include <cmath>

using namespace std;

float nums[10];

void filling() {
	for (int i = 0; i < 10; i++) {
		nums[i] = rand() % 30 - 10;
	}
	for (int i = 0; i < 10; i++) {
		cout << nums[i] << endl;
	}
}

int main() {
	filling();
	return 0;
}