#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second

int dx[] = {0,1,0,-1,-1,-1,1,1};
int dy[] = {1,0,-1,0,-1,1,1,-1};

int field[51][51];
bool check[51][51];

int w,h;

int bfs(int x, int y){
    
    queue<pair<int,int>> pq;
    pq.push({x,y});
    check[x][y] = true;

    int clt = 0;
    while(!pq.empty()){
        auto cur = pq.front();
        pq.pop();
        for (int lo = 0; lo < 8; lo++){
            int nx = cur.X + dx[lo];
            int ny = cur.Y + dy[lo];
            if (nx < 0 || nx >= w || ny < 0 || ny >=h) continue;
            if (check[nx][ny] == true || field[nx][ny] == 0) continue;
            check[nx][ny] = true;
            pq.push({nx,ny});
            clt++;
        }
    }

    return clt > 0 ? 1 : 0;
}

int main() {

    
    while(cin >> w >> h){
        if (w == 0 && h == 0) break;

        for (int i = 0; i < w; i++){
            for (int j = 0; j < h; j++){
                cin >> field[i][j];
            }
        }
        int ans = 0;
        for (int i = 0; i < w; i ++){
            for (int j = 0; j < h; j++){
                if (field[i][j] == 1 && check[i][j] == false){
                    ans += bfs(i,j);
                }
            }
        }
        cout << ans << '\n';
        memset(field, 0, sizeof(field));
        memset(check, 0, sizeof(check));
    }

}