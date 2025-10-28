#include <bits/stdc++.h>

using namespace std;

vector<string> words;
vector<int> fld[500008];

void dfs(int node) {
    cout << words[node];
    for (auto k : fld[node]){
        dfs(k);
    }
    
}

int main() {

    int n; cin >> n;
    words.resize(n+1);
    for (int i = 1; i <=n; i++){
        cin >> words[i];
    }
    int a,b;
    for (int i =0; i < n-1; i++){
        cin >> a >> b;
        fld[a].push_back(b);
    }

    dfs(a);
}