#include <iostream>
#include <stdio.h>
using namespace std;

int main() {

	int n;
	int count = 0;
	while (cin >> n) {
		
		count += n;
	}
	printf("%d", count);
}