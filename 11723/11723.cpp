#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m;
    cin >> m;

    int s = 0;

    while(m--){
        string in;
        int n;
        
        cin >> in;

        if (in == "add"){
            cin >> n;
            s |= (1 << n);
        }
        else if (in == "remove"){
            cin >> n;
            s &= ~(1 << n);
        }
        else if (in == "check"){
            cin >> n;
            cout << ((s & (1 << n)) ? 1 : 0) << '\n';
        }
        else if (in == "toggle"){
            cin >> n;
            s ^= (1 << n);
        }
        else if (in == "all"){
            s = (1 << 21) - 2;
        }
        else if (in == "empty"){
            s = 0;
        }
    }

    return 0;
}