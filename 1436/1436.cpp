#include <bits/stdc++.h>

using namespace std;

int main() {

    int r = 666;
    int n; cin >> n;

    if (n == 1) {
        cout << r;
        return 0;
    }
    else {
        for (int i = 1; i < n; i++){
            while(true){
                r++;
                string t = to_string(r);
                if (t.find("666") != -1) break;
            }
        }
    }
    cout << r;
}