#include <iostream>

using namespace std;

int main() {

    string s;
    cin >> s;
    for (char c : s){
        if (c=='B') cout << "v";
        else if (c=='E') cout << "ye";
        else if (c=='H') cout << "n";
        else if (c=='P') cout << "r";
        else if (c=='C') cout << "s";
        else if (c=='Y') cout << "u";
        else if (c=='X') cout << "h";
        else {
            cout << (char)(c + ('a'-'A'));
        }
    }

}