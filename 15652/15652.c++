#include <iostream>
#include <vector>

#define endl '\n'
#define ft cin.tie(0) -> sync_with_stdio(false)

using namespace std;

int n, m;
int vis[10];

void s(int a, int b) {
	if (b == m) {
		for (int i = 0; i < m; i++) {
			cout << vis[i] << ' ';
		}
		cout << endl;
		return;
	}

	for (int j = a; j <= n; j++) {
		vis[b] = j;
		s(j, b + 1);
	}
}
int main() {
	ft;
	cin >> n >> m;

	s(1, 0);

}