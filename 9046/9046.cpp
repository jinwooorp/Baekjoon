#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    
    int n; cin >> n;
    cin.ignore();
    while (n--){

        string s; getline(cin,s);
        
        int cnt[26];
        fill(cnt, cnt + 26, 0);

        for (char c : s){
            if (c == ' ') continue; 
            cnt[c-'a']++;
        }
        int mx = *max_element(cnt,cnt+26);

        int ct = 0;
        char c;
        for (int i = 0; i < 26; i++){
            if (cnt[i] == mx){
                ct++;
                c =  'a' + i;
            }
        }

        if (ct > 1) cout << "?" << '\n';
        else cout << c << '\n';
    }
}