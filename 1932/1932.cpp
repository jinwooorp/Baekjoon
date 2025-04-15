#include <iostream>
#include <algorithm>

using namespace std;

int tlg[501][501];
int dp[501][501];
int main() {

    int n; cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <=i; j++){
            cin >> tlg[i][j]; 
        }
    }

    dp[1][1] = tlg[1][1];

    for (int i = 2; i <= n; i++){
        for (int j = 1; j <=i; j++){
            if (j == 1){ //맨 왼쪽
                dp[i][j] = dp[i-1][j] + tlg[i][j];
            }
            else if (j == i){ //맨 오른쪽
                dp[i][j] = dp[i-1][j-1] + tlg[i][j];
            }
            else { // 중간
                dp[i][j] = max(dp[i-1][j],dp[i-1][j-1]) + tlg[i][j];
            }
        }
    }

    int answer = 0;
    for (int j = 1; j <= n; j++) {
        answer = max(answer, dp[n][j]);
    }
    cout << answer;
}