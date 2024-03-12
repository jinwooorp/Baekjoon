#include <iostream>
#include <stdio.h>

using namespace std;

int dp[501];


int main() {

	int n;
	int k,m,p;
	m = 0;
	p = 0;
	int visited[151];
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> visited[i];
	}
	//int j;
	for (int j = 0; j < n; j++) {
		int t;
		t = visited[p];
		m += 1;
		if (t == k) {
			cout << m;
			return 0;
		}
		p = t;
	}
	printf("-1");
	

}