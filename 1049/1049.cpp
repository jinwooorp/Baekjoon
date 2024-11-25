#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int n;
    int mnt[10001];
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> mnt[i];
    }
    int mx = 0;
    int cnt = 0;
    for (int i = 0; i < n-1; i++){
        for (int j = i; j <=n-1; j++){
            if (mnt[i] > mnt[j]){
                cnt++;
            }
            else{
                mx = max(cnt,mx);
                cnt = 0;
                break;
            }
        }
    }
    cout << mx;
}