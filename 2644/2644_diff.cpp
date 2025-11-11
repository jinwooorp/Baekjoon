#include <bits/stdc++.h>

using namespace std;

vector<int> adj[102];
int p,c; 
int ans = -1;
bool vis[102];
void dfs(int cur,int depth) {
    if (cur == c){
        ans = depth;
        return;
    }

    vis[cur] = true;

    for (int nxt : adj[cur]){
        if (!vis[nxt]) dfs(nxt,depth+1);
    }
    
}

int main() {
    int n; cin >> n;
    cin >> p >> c;
    int m; cin >> m;

    for (int i =0; i < m; i++){
        int u,v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(p,0);

    cout << ans;
}