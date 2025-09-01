#include <bits/stdc++.h>

using namespace std;

int main() {

    int mi,mx; cin >> mi >> mx;
    int ans = 0;

    for (int i = mi; i <= mx; i++){
        bool chk = true;
        if (i == 1) continue;
        for (int j = 2; j*j <= i; j++){
            if (i % j == 0) {
                chk = false;
                break;
            }
        }
        if (chk) cout << i << '\n';
    }
}