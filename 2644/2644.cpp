#include <bits/stdc++.h>

using namespace std;

vector<int> adj[102];
int depth[102];
int par[102];
void dfs(int cur) {
    for (auto nxt : adj[cur]){
        if(par[cur] == nxt) continue;
        par[nxt] = cur;
        depth[nxt] = depth[cur] + 1;
        dfs(nxt);
    }
}

int main() {
    int n; cin >> n;
    int p,c; cin >> p >> c;
    int m; cin >> m;

    for (int i =0; i < m; i++){
        int u,v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(p);

    cout << (depth[c] > 1 ? depth[c] : -1);
}