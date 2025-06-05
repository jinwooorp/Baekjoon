#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int arr[100'000] = {0,};

int main() {
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


    int n,m; cin >> n >> m;
    vector<int> v(n);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    //arr[0] = v[0];  
    for (int i = 1; i <=n; i++){
        arr[i] = arr[i-1] + v[i-1];
    }

    for (int i = 0; i < m ; i++){
        int a,b; cin >> a >> b;
        cout << arr[b] - arr[a-1] << '\n';
    }

}