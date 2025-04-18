#include <iostream>

using namespace std;

int dp[15];

int main() {
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    dp[4] = 7;
    for (int i = 5; i <= 11; i++){
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }

    int t; cin >> t;
    while(t--){
        int n; cin>> n;
        cout << dp[n] << '\n';
    }
}