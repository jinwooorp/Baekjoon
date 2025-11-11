#include <bits/stdc++.h>

using namespace std;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

string fld[25];
bool vis[25][25];

int n;
vector<int> v;

void bfs(int i,int j){
    queue<pair<int,int>> q;
    q.push({i,j});
    vis[i][j] = true;
    int cnt = 0;
    while(!q.empty()){
        auto [x,y] = q.front();
        q.pop();
        cnt++;
        for (int dir = 0; dir < 4; dir++){
            int nx = x + dx[dir];
            int ny = y + dy[dir];
            if (nx < 0 || nx >= n || ny < 0 || ny >= n ) continue;
            if (fld[nx][ny] != '1' || vis[nx][ny] == true) continue;
            q.push({nx,ny});
            vis[nx][ny] = true;
        }
    }

    v.push_back(cnt);
}

int main() {

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> fld[i];
    }

    int call = 0;
    queue<pair<int,int>> q;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (fld[i][j] == '1' && vis[i][j] == false){
                call++;
                bfs(i,j);
            }
        }
    }

    cout << call << '\n';
    sort(v.begin(),v.end());
    for (int x : v){
        cout << x << '\n';
    }
}