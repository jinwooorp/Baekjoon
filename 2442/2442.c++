#include <iostream>
#include <stdio.h>
#define endl '\n'
using namespace std;

int main() {

	int n =0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < n-i; j++) {
			printf(" ");
		}
		for (int k = 0; k < 2*i -1; k++ ) {
			printf("*");
		}

		cout << endl;

	}

	return 0;
}