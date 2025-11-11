#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define X first
#define Y second

int main() {

    ll int a,b;
    cin >> a >> b;
    queue<pair<ll,ll>> pq;
    pq.push({a,1});

    while(!pq.empty()){
        auto cur = pq.front();
        pq.pop();

        if (cur.X == b) {
            cout << cur.Y;
            return 0;
        }

        if (cur.X * 2 <=b){
            pq.push({cur.X*2,cur.Y+1});
        }
        if ((cur.X * 10)+1 <=b){
            pq.push({(cur.X*10)+1,cur.Y+1});
        }
    }
    cout << -1;
}