#include <iostream>
#include <algorithm>

using namespace std;
int mnt[100001];

int main() {

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> mnt[i];
    }

    int mx = 0; 

    for (int i = 0; i < n-1; i++) { 
        int cnt = 0;
        for (int j = i + 1; j < n; j++) { 
            if (mnt[i] > mnt[j]) {
                cnt++;
            }
            else {
                break; 
            }
        }
        mx = max(mx, cnt);
    }

    cout << mx;
    return 0;
}