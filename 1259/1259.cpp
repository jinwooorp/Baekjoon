#include <bits/stdc++.h>
using namespace std;

int main() {

    while(true){
        bool check = true;
        string t;
        cin >> t;
        if (t == "0") break;

        for (int i = 0; i <= t.length()/2; i++){
            if (t[i] != t[t.length()-1-i]){
                check = false;
                break;
            }
        }

        if (check) {
            cout << "yes" << '\n';
        }
        else {
            cout << "no" << '\n';
        }
    }
}
