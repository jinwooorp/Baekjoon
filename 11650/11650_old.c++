#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#define endl "\n"
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<pair<int, int>> xy;
	int n;
	int inf, ins;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> inf >> ins;
		xy.push_back(make_pair(inf, ins));
	}

	sort(xy.begin(), xy.end());

	for (int i = 0; i < n; i++) {
		cout << xy[i].first<<" "<< xy[i].second << endl;
	}

	return 0;
}