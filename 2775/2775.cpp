#include <iostream>
#include <algorithm>

using namespace std;

int dp[15][15];

int main() {

    int t; cin >> t;

    for (int i = 1; i <=15; i++){
        dp[0][i] = i;
        dp[i][1] = 1;
    }

    for (int i = 1; i < 15; i++){
        for (int j = 2; j < 15; j++){
            dp[i][j] = dp[i][j-1] + dp[i-1][j];
        }
    }

    while (t--){
        int k;
        int n;
        cin >> k;
        cin >> n;
        cout << dp[k][n] << '\n';
    }

}