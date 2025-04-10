#include <iostream>
#include <algorithm>

using namespace std;

int stair[301];
int dp[301][2];
int main() {

    int n;cin >> n;

    for (int i = 1; i <=n; i++){
        cin >> stair[i];
    }

    if (n == 1){    
        cout << stair[1];
        return 0;
    }

    dp[1][1] = stair[1];
    dp[1][2] = 0;
    dp[2][1] = stair[2];
    dp[2][2] = stair[1] + stair[2];

    for (int i = 3; i <= n; i++){
        dp[i][1] = max(dp[i-2][1],dp[i-2][2]) + stair[i];
        dp[i][2] = dp[i-1][1] + stair[i];
    }

    cout << max(dp[n][1],dp[n][2]);
}