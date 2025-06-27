#include <bits/stdc++.h>

using namespace std;

int main() {

    string s;
    cin >> s;
    vector<int> v;
    int result = 0;
    bool zero = false;

    for (char c : s){
        int n = c - '0';
        if (n == 0) zero = true;
        result += n;
        v.push_back(n);
    }

    if (!zero || result % 3 != 0){
        cout << "-1";
        return 0;
    }

    sort(v.rbegin(),v.rend());

    for (int k : v){
        cout << k;
    }

}