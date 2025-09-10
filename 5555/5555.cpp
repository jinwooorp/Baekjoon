#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    int n; cin >> n;

    int cnt = 0;
    for (int i = 0; i < n; i++){
        string t; cin >> t;
        string cicrle = t+t;
        if (cicrle.find(s) != string::npos){
            cnt++;
        }
    }
    cout << cnt;
}