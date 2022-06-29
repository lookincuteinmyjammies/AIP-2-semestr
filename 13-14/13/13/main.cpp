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

void zadanie() {
	for (int i = 1; i < 10; i++) {
		if (nums[i] < 0) {
			nums[i] = nums[i] + 5;
		}
		if (nums[i] > 0) {
			nums[i] = nums[i] - 1;
		}
	}
}

int main() {
	return 0;
}