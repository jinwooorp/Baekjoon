#include <iostream>
#include <string>
#include <stack>

using namespace std;

double calc(double x,double y,char c) {

	if (c == '+') return x + y;
	else if (c == '-') return x - y;
	else if (c == '*') return x * y;
	else if (c == '/') return x / y;
}

int main() {

	int n;
	double num[26];
	stack<double> st;
	string s;

	cin >> n;
	cin >> s;
	
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	double a, b;

	for (int j = 0; j < s.size(); j++) {
		if ('A' <= s[j] && s[j] <= 'Z') {
			st.push(num[s[j] - 'A']);
		}
		else {
			b = st.top(); st.pop();
			a = st.top(); st.pop();
			st.push(calc(a, b, s[j]));
		}
	}
	cout << fixed;
	cout.precision(2);
	cout << st.top();
}