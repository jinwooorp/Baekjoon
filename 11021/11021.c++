#include <iostream>
#include <stdio.h>
#define endl '\n'
using namespace std;

int main() {

	int n =0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int j,h = 0;
		cin >> j >> h;
		printf("Case #%d: %d\n",i,j+h);
	}

	return 0;
}

