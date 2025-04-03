#include <iostream>

using namespace std;

#define ll long long

int main() {

    ll int n , m;
    cin >> n >> m;

    ll int ans = 1;
    ll int arr[101];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++){
        ans *= (arr[i]%m);
        ans %= m;
    }
    cout << ans;
}