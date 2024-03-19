#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

struct Data {
	int x, y;
};

bool compare(Data a, Data b) {
	if (a.x == b.x) {
		return a.y < b.y;
	}
	else return a.x < b.x;
}

Data arr[100001] = { 0, };
int main() {

	int n;
	//Data arr[100001] = { 0, };
	cin >> n;
	for (int i = 0; i < n; i++) {	
		cin >> arr[i].x >> arr[i].y;
	}

	stable_sort(arr, arr + n,compare);

	for (int j = 0; j < n; j++) {
		printf("%d %d\n", arr[j].x, arr[j].y);
	}

}