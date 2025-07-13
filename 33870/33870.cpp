#include <bits/stdc++.h>

using namespace std;

int main() {

    int n,m; cin >> n >> m;
    vector<int> v(n);
    vector<bool> vb(n,true);
    for (int i = 0; i < n; i++){
        cin >> v[i];
        //v[i] += 1;
    }

    vector<int> tmp = v;

    int cnt = 0;
    while(m--){
        int idx; cin >> idx;
        if (vb[idx-1]==false){
            cnt++;
            if (cnt == 2) {
                cnt = 0;
                v[idx-1] = tmp[idx-1];
            }
            else {
                for (int i = 0; i < n; i++){
                    v[i] -= 1;
                }
            }
        }
        else {
            for (int i = 0; i < n; i++){
                    v[i] -= 1;
            }
            if (v[idx-1] <= -1) {
                vb[idx-1] = false;
            }
            else v[idx-1] = tmp[idx-1];
        }

        cout << idx << '\n';
        for (int x : v){
            cout << x << ' ';
        }
        cout << '\n';
    }

    for (int i = 0; i < n; i++){
        v[i] -= 1;
    }
    for (int x : v){
            cout << x << ' ';
        }
        cout << '\n';
    int ans = 0;
    for (int x : v){
        if (x <0){
            ans++;
        }
    }
    cout << ans;
}

