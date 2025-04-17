#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    int n;cin>> n;
    vector<int> v;
    v.resize(n+1);
    vector<int> dp;
    dp.resize(n+1);
    for (int i =1; i <=n; i++){

        cin >> v[i];
    }
    dp[1] = v[1];
    int mx = dp[1];

    for (int i = 2; i <=n; i++){
        dp[i] = max(dp[i-1]+v[i],v[i]);
        mx = max(dp[i],mx);
    }

    cout << mx;
}