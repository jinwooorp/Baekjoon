#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int h,w; cin >> h >> w;
    vector<int> v(w);
    for (int i = 0; i < w; i++){
        cin >> v[i];
    }

    int ans = 0;

    for (int i = 1; i < w-1; i++){
        int l = *max_element(v.begin(),v.begin()+i);
        int r = *max_element(v.begin()+i+1,v.end());

        int d = min(l,r) - v[i];
        if (d > 0) {
            ans += d;
        }
    }
    cout << ans;
    
}