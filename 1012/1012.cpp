#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second 

int fld[51][51];
int check[51][51];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int n , m , k; 

void bfs(int x, int y) {
    queue<pair<int,int>> q;
    q.push({x,y});
    check[x][y] = 1;

    while(!q.empty()){
        auto cur = q.front(); 
            q.pop();
            for (int dir = 0; dir < 4; dir++){
                int nx = dx[dir] + cur.X;
                int ny = dy[dir] + cur.Y;
                if (nx < 0 || ny < 0 || nx >= n || ny >= m){
                    continue;
                }
                if (check[nx][ny] == 1 || fld[nx][ny] == 0) continue;
                check[nx][ny] = 1;
                q.push({nx,ny});
            }
    }

}

int main() {

    int t = 0; cin >> t;
    
    while(t--) {
        int cnt = 0;
        cin >> n >> m >> k;

        for (int l = 0; l < k; l++){
            int x,y; cin >> x >> y;
            fld[x][y] = 1;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++){
                if (fld[i][j] == 1 && check[i][j] == 0){
                    bfs(i,j);
                    cnt++;
                }
            }
        }
        cout << cnt << '\n';
        memset(fld, 0, sizeof(fld));
        memset(check, 0, sizeof(check));
    }

}