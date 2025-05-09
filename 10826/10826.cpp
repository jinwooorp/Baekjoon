#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string add(string a, string b){
    int num;
    int carry = 0;
    string result;

    while(a.size() < b.size()) a = "0" + a;
    while(a.size() > b.size()) b = "0" + b;

    for (int i = a.size() - 1; i >= 0; i--){
        num = (a[i] - '0') + (b[i] - '0') + carry;
        carry = num / 10;
        result += (num%10) + '0';
    }
    
    if (carry) result += carry + '0';

    reverse(result.begin(), result.end());
    return result;
}

int main() {

    int n;
    string dp[10007];

    cin >> n;
    dp[0] = "0";
    dp[1] = "1";
    for (int i = 2; i <=n; i++){
        dp[i] = add(dp[i-1],dp[i-2]);
    }

    cout << dp[n] << endl;
}