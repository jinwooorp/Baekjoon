#include <bits/stdc++.h>

using namespace std;

int n , m , h;
int fld[101][101][101];
int dist[101][101][101];
int dx[6] = {1,-1,0,0,0,0};
int dy[6] = {0,0,1,-1,0,0};
int dz[6] = {0,0,0,0,1,-1};

typedef struct xyz {
    int x,y,z;
}xyz;

 queue<xyz> q;

void bfs(){
    while(!q.empty()) {
        auto [X,Y,Z] = q.front();
        q.pop();
        for (int dir = 0; dir < 6; dir++){
            int nx = X + dx[dir];
            int ny = Y + dy[dir];
            int nz = Z + dz[dir];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m || nz < 0 || nz >= h) continue;
            if (fld[nx][ny][nz] == -1 || dist[nx][ny][nz] != -1) continue;
            dist[nx][ny][nz] = dist[X][Y][Z] + 1;
            q.push({nx,ny,nz});
        }
    }
}

int main() {
   
    cin >> m >> n >> h;
    for (int k = 0; k < h; k++){
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> fld[i][j][k];
            }
        }
    }

     memset(dist,-1,sizeof(dist));

    for (int k = 0; k < h; k++){
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (fld[i][j][k] == 1){
                    q.push({i,j,k});
                    dist[i][j][k] = 0;
                }
            }
        }
    }
    bfs();
    int ans = 0;
    for (int k = 0; k < h; k++){
        for(int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (fld[i][j][k] != -1 && dist[i][j][k] == -1){
                    cout << -1;
                    return 0;
                }
                 ans = max(ans, dist[i][j][k]);
            }
        }
    }
    cout << ans;
}