#include <bits/stdc++.h>

using namespace std;


int cnt = 0;
int n;

bool issu1[40];
bool issu2[40];
bool issu3[40];

void func(int cur){
    if (cur == n){
        cnt++;
        return;
    }
    for (int i = 0; i < n; i++){
        if (issu1[i] || issu2[i+cur] || issu3[cur-i + n - 1]) continue;
        issu1[i] = 1;
        issu2[i+cur] = 1;
        issu3[cur-i + n - 1] = 1;
        func(cur+1);
        issu1[i] = 0;
        issu2[i+cur] = 0;
        issu3[cur-i + n - 1] = 0;
    }
}


int main() {

    //int n;
    cin >> n;
    func(0);
    cout << cnt;
}