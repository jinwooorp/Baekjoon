#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {

    string p = "abcdefghijklmnopqrstuvwxyz";
    string c = "wghuvijxpqrstacdebfklmnoyz";

    // map<char, char> mcc;

    // for (int i = 0; i < 26; ++i) {
    //     mcc[c[i]] = p[i];
    // }
    // cin.ignore();
    // string s; getline(cin,s);
    // int freq[26] = {0,};
    // for (int i = 0; i < s.length(); i++){
    //     if (s[i] != ' '){
    //         freq[mcc[s[i]]-'a']++;
    //     }
    // }
    for (int i = 0; i < 26; i++) {
    if (freq[i] > 0)
        cout << char('a' + i) << ": " << freq[i] << '\n';
    }
}