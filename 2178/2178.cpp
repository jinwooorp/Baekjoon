#include <bits/stdc++.h>

using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};


int fld[101][101];
int dist[101][101];
int n,m;

void bfs() {
    for(int i = 0; i < n; i++) fill(dist[i],dist[i]+m,-1);
    queue<pair<int,int>> q;
    q.push({0,0});
    dist[0][0] = 0;

    while(!q.empty()){
        auto [x,y] = q.front();
        q.pop();
        for (int dir = 0; dir < 4; dir++){
            int nx = x + dx[dir];
            int ny = y + dy[dir];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (dist[nx][ny] >= 0 || fld[nx][ny] != 1) continue;
            q.push({nx,ny});
            dist[nx][ny] = dist[x][y] + 1;
        }
    }

}

int main() {

    cin >> n >> m;
    for (int i = 0; i < n; i++){
        string s; cin >> s;
        for (int j = 0; j < m; j++){
            fld[i][j] = s[j] - '0';
        }
    }

    bfs();

    cout << dist[n-1][m-1] + 1;
}