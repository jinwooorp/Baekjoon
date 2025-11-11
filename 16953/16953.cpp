#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, b; cin >> a >> b;
    int cnt = 1;
    while (true){
        if (b == a){
            cout << cnt;
            return 0;
        }
        else if (b < a){
            cout << -1;
            return 0;
        }
        if (b % 2 == 0){
            b /= 2;
            cnt++;
        }

        else if (b % 10 ==1){
            b /= 10;
            cnt++;
        }

        else {
            cout << -1;
            return 0;
        }
    }

}