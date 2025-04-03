#include <iostream>

using namespace std;

int main() {

    string s;
    int n = 0;
    cin >> n;
    cin >> s;
    int cnt = 0;
    int bonus = 0;
    for (int i = 0; i < n; i++){
        if (s[i] == 'O'){
            cnt+=(i+1);
            cnt+=bonus;
            bonus++;
        }
        else {
            
            bonus = 0;
        }
        
    }
    
    cout << cnt;
}