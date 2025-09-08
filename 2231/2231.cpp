#include <iostream>

using namespace std;

int main() {

    int n; cin >> n;
    
    for (int i = 1; i < n; i++){
        int sum = i;
        int t = i;

        while(t != 0 ){
            sum += t % 10;
            t /= 10;
        }
        if (sum == n){
            cout << i << '\n';
            return 0;
        }
    }
    cout << 0 << '\n'; // 만약 안 나올 경우
}