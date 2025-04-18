#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    int n; cin >> n;
    
    vector<int> wgt(n);

    for (int i =0; i <n; i++){
        cin >> wgt[i];
    }

    sort(wgt.begin(),wgt.end());


    int w = 0;
    int mx = 0;
    for(int i = 0; i < n; i++){
        w = wgt[i] * (n-i);
        mx = max(mx,w); 
    }

    cout << mx;
}
