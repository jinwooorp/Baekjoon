#include <bits/stdc++.h>

using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int fld[1001][1001];
int dist[1001][1001];

int m,n;

int main() {

    cin >> m >> n;
    memset(dist,-1,sizeof(dist));
    queue<pair<int,int>> q;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> fld[i][j];
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (fld[i][j] == 1 && dist[i][j] == -1){
                q.push({i,j});
                dist[i][j] = 0;
            }
        }
    }
    
    
    while(!q.empty()){
        auto [x,y] = q.front();
        q.pop();
        for(int dir = 0; dir < 4; dir++){
            int nx = x + dx[dir];
            int ny = y + dy[dir];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (dist[nx][ny] != -1 || fld[nx][ny] == -1 ) continue;
            q.push({nx,ny});
            dist[nx][ny] = dist[x][y] + 1; 
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (dist[i][j] == -1 && fld[i][j] == 0){
                cout << -1;
                return 0;
            }
            cnt = max(cnt,dist[i][j]);
        }
    }
    cout << cnt;
}