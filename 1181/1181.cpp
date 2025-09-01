#include <bits/stdc++.h>

using namespace std;

int compare(string x,string y){
    if (x.length() == y.length()){
        return x < y;
    }
    else {
        return x.length() < y.length();
    }
}

int main() {

    int n; cin >> n;
    vector<string> v(n);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }


    sort(v.begin(),v.end(),compare);
    v.erase(unique(v.begin(),v.end()),v.end());

    for (auto x : v){
        cout << x << '\n';
    }
}