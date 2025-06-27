#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int v , e, st;

vector<pair<int,int>> adj[20005];
const int INF = 0x3f3f3f3f;
int d[20005]; // 최단 거리 테이블
    

int main() {

    cin >> v >> e;
    cin >> st;
    fill(d,d+v+1,INF);
    while(e--){
        int u , v ,w;
        cin >> u >> v >> w;
        adj[u].push_back({w,v}); // 가중치, 정점
    }
    priority_queue<pair<int,int> ,
                   vector<pair<int,int>>,
                   greater<pair<int,int>>> pq;

    d[st] = 0;
    pq.push({d[st],st});
    while(!pq.empty()){
        auto cur = pq.top();
        pq.pop();
        if (d[cur.Y] != cur.X) continue;
        for (auto nxt : adj[cur.Y] ){
            if(d[nxt.Y] <= d[cur.Y] + nxt.X) continue;
            d[nxt.Y] = d[cur.Y] + nxt.X;
            pq.push({d[nxt.Y],nxt.Y});
        }
    }

    for (int i = 1; i <=v; i++){
        if (d[i] == INF) cout << "INF\n";
        else cout << d[i] << '\n';
    }
}