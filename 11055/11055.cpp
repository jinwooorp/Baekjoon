#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int n; cin >> n;
    int arr[1001];
    int dp[1001];
    for (int i = 1; i <= n; i++){
        cin >> arr[i];
        dp[i] = arr[i];
    }

    int ans = arr[1];

    for (int i =2; i <=n; i++){
        for (int j = 1; j <i; j++ ){
            if (arr[j] < arr[i]){
                //1 100 2 50 60 3 5 6 7 8
                dp[i] = max(dp[i],dp[j]+arr[i]); // dp[1] = 1, dp[2] = 101, dp[3] = 3 , dp[4] = 53
                //dp2 = dp2,dp1(1)+arr2(100) , 100,101
                //dp3 = dp[3],dp[1](1)+arr3(2) 2,3
                //dp4 = dp[4],dp[1]+arr[4] 50,51
                //dp4 = dp[4],dp[3]+arr[4] 51,3+50
            }
        }
        ans = max(dp[i],ans); 
    }

    cout << ans;
}