#include <iostream>
using namespace std;

int main() {
    int ans = 0;             
    for (int i = 0; i < 10; i++) {
        int t;
        cin >> t;            
        ans = (ans + t) % 4;
    }
    // 최종 방향 출력
    if (ans == 0) cout << 'N';
    else if (ans == 1) cout << 'E';
    else if (ans == 2) cout << 'S';
    else cout << 'W';

    return 0;
}
