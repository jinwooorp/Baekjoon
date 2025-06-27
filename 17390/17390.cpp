#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int arr[300'000];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    
    int n,q; cin >> n >> q;
    vector<int> v(n);

    for (int i = 1; i <=n; i++){
        cin >> v[i];
    }

    sort(v.begin(),v.end());

    for (int i = 1; i <= n; i++){
        arr[i] = arr[i-1] + v[i];
    }

    for (int j = 0; j < q; j++){
        int a,b; cin >> a >> b;
        cout << arr[b] - arr[a-1] << '\n';
    }
}