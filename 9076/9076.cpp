#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int t;cin >> t;
    vector<int> v(5);

    while(t--){
        for (int i = 1; i <=5; i++){
            cin >> v[i];
        }

        sort(v.begin(),v.end());

        v.erase(v.begin());
        v.erase(v.end()-1);
        

        int f = v.front();
        int b = v.back();
        int sum = 0;
        if ((b - f) >= 4) {
            cout << "KIN" << '\n';
        }
        else {
            for (int k : v){
                sum += k;
            }
            cout << sum << '\n';
        }
        v.assign(5,0);

    }


}