#include <iostream>
#include <map>
#include <string>
using namespace std;

int main () {

    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    int n,m;
    cin >> n >> m;

    string s;
    map<int , string > im;
    map<string , int > nm;
    for (int i = 1; i <=n; i++) {
        cin >> s;
        im.insert({i,s});
        nm.insert({s,i});
    }

    string in;
    for (int i = 0; i < m; i++){    
        cin >> in;
        if(isdigit(in[0])){
            cout << im[stoi(in)] << '\n';
        }
        else cout << nm[in] << '\n';
    }
}