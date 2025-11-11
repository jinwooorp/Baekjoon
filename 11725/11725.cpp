#include <bits/stdc++.h>

using namespace std;

vector<int> adj[100'004];
int p[100'001];

void dfs(int node) {
    for (int e : adj[node]){
        if (p[node] == e) continue;
        p[e] = node;
        dfs(e);
    }
}

int main() {
    int n; cin >> n;

    int u,v;
    for (int i = 0; i <n-1; i++){
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1);
    for (int i = 2; i <= n; i++){
        cout << p[i] << '\n';
    }
}