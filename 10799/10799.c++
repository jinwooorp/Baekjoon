#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {

	stack<int> S;
	string input; cin >> input;

	int ans = 0;

	for (int i = 0; i < input.size(); i++) {
		if (input[i] == '(' && input[i+1] == ')') {
			ans += S.size();
			i++;
		}
		else if (input[i] == '(') {
			ans++; S.push(input[i]);
		}
		else if (input[i] == ')') S.pop();
	}

	cout << ans;
}