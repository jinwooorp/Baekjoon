#include <iostream>
#include <stdio.h>
#define endl '\n'
using namespace std;

int main() {

	int n =0;
	cin >> n;
	for (int i = n; i >=1 ; i--) {

		for (int j = 2 * i - 1; j >= 1; j--) {
			printf("*");
		}
		cout << endl;
		for (int k = 0; k <= n - i; k++) {
			printf(" ");
		}
	}

	return 0;
}