#include <bits/stdc++.h>

using namespace std;

int isprime(int p) {

    if (p == 1) return 0;
    for (int i = 2; i*i <= p; i++){
        if (p % i == 0) return 0;
    }
    return 1;
}

int main() {

    int n;
    cin >> n;
    int ans = 0;

    for (int i = 0; i < n; i++){
        int p; cin >> p;
        ans += isprime(p);
    }
    cout << ans;
}