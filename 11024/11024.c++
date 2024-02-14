#include <iostream>
#include <stdio.h>
#include <string>
#define endl '\n'

using namespace std;

int main() {
	int n;
	cin >> n;
	cin.ignore();

	while (n--) {
		string s;
		int sum = 0;
		getline(cin, s);
		string num = "";
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == ' ') {
				sum += stoi(num);
				num = "";
			}
			else {
				num += s[i];
			}
		}
		if (num != "") {
			sum += stoi(num);
		}
		cout << sum << endl;
	}
}