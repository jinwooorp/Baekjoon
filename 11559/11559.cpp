#include <bits/stdc++.h>

using namespace std;

const int h = 12;
const int w = 6;

string fld[h];
bool vis[h][w];

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

bool bfs(int x,int y,char c) {
    queue<pair<int,int>> q;
    vector<pair<int,int>> delq;
    q.push({x,y});
    vis[x][y] = true;
    delq.push_back({x,y});
    while(!q.empty()){
        //int X,Y;
        auto [X,Y] = q.front();
        q.pop();
        for (int dir = 0; dir < 4; dir++){
            int nx = X + dx[dir];
            int ny = Y + dy[dir];
            if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
            if (vis[nx][ny] || fld[nx][ny] !=c) continue;
            q.push({nx,ny});
            vis[nx][ny] = true;
            delq.push_back({nx,ny});
        }
    }

    if ((int)delq.size() >= 4){
        for (auto [X,Y] : delq){
            fld[X][Y] = '.';
        }
        return true;
    }
    return false;
}

void g() {

	for (int i = 0; i < w; i++){
        int e = h -1;
        for (int j = h - 1; j >=0; j--){
            if (fld[j][i] != '.') {
                if (j != e){
                    fld[e][i] = fld[j][i];
                    fld[j][i] = '.';
                }
                e--;
            }
        }
    }
}

int main() {

    for (int i = 0; i < h; i++){
        cin >> fld[i];
    }
    int cnt = 0;
    while (true) {

        bool cnti = false;
        memset(vis,false,sizeof(vis));
        
        for (int i = 0; i <h; i++){
            for (int j = 0; j < w; j++){
                if (fld[i][j] != '.' && !vis[i][j]) {
                    if (bfs(i,j,fld[i][j])) cnti = true;
                }
            }
        }
        if (!cnti) break;
        g();
        cnt++;

    }


    cout << cnt;
}