#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main () {

    int h , w;
    cin >> h >> w;

    vector<int> vi(w);

    for (int i = 0; i < w; i++){
        cin >> vi[i];
    }

    int ans = 0;

    for (int i = 1; i < w-1; i++){
        int left = *max_element(vi.begin(),vi.begin()+i);
        int right = *max_element(vi.begin()+i+1,vi.end());
        
        int water = min(left,right) - vi[i];
        if (water > 0){
            ans += water;
        }
    }
    cout << ans;
}