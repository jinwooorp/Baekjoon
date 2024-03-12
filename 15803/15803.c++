#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	double x[3];
	double y[3];
	bool ans = true;
	for (int i = 0; i < 3; i++) {
		cin >> x[i] >> y[i];
		if (x[0] == x[1] && x[1] == x[2]) {
			ans = false;
		}
		else if (y[0] == y[1] && y[1] == y[2]) {
			ans = false;
		}
		else if (double((y[1] - y[0]) / (x[1] - x[0])) == double((y[2] - y[1]) / (x[2] - x[1]))) {
			ans = false;
		}
	}

	if (ans) {
		printf("WINNER WINNER CHICKEN DINNER!");
	}
	else {
		printf("WHERE IS MY CHICKEN?");
	}

}