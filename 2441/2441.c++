#include <iostream>
#include <stdio.h>
#define endl '\n'
using namespace std;

int main() {

	int n =0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			printf("*");
		}
		printf("\n");
		for (int k = 0; k < i+1; k++) {
			printf(" ");
		}
	}

	return 0;
}