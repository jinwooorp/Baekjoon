#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>


using namespace std;
vector<vector<int>> adj;
vector<int> dist;

int bfs(int N){
    queue<int> q;
    q.push(1);
    dist[1] = 1;

    while(!q.empty()){
        auto cur = q.front();
        q.pop();
        for(int lo : adj[cur]){
            if (dist[lo] == -1){
                if (lo > N) dist[lo] = dist[cur];
                else {
                    dist[lo] = dist[cur]+1;
                }
                q.push(lo);
            }
        }
    }
    
    return (dist[N] == -1) ? -1 : dist[N];
}

int main() {
    int N,K,M;
    cin >> N >> K >> M;
    
    adj.resize(N + M + 1);
    dist.assign(N + M + 1, -1);

    for (int i = 1; i <=M; i++){
        for (int j = 0; j < K; j++){
            int s;
            cin >> s;
            adj[s].push_back(N+i);
            adj[N+i].push_back(s);       
        }
    }

    cout << bfs(N);

}