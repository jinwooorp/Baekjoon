#include <iostream>
#include <string>
#include <map>
#include <cmath>
using namespace std;



int main () {

    string s;
    map<char, int> word;

    word['-'] = 0;
    word['\\'] = 1;
    word['('] = 2;
    word['@'] = 3;
    word['?'] = 4;
    word['>'] = 5;
    word['&'] = 6;
    word['%'] = 7;
    word['/'] = -1;

    while (true) {
    int sum = 0;
    cin >> s;
    if (s == "#") break;
    for (int i = 0; i < s.length(); i++) {
        if (i == s.length() - 1) sum += word[s[i]];
        else sum += word[s[i]] * pow(8, (s.length() -1)- i);
    }
    cout << sum << '\n';
}

}