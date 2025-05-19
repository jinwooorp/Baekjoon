#include <iostream>
#include <string>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0); 
	string s;
	string bm;
    string result;
    cin >> s;
    cin >> bm;
    int bml = bm.length();

    for (char c : s){
        result.push_back(c);
        if (result.size() >= bml){
            if (result.substr(result.size()-bml,bml) == bm){
                result.erase(result.size()-bml,bml);
            }
        }
    }

    if (result.size() == 0){
        cout << "FRULA";
    }
    else cout << result;
}