#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    string s;
    string n1;
    string n2;
    cin >> s;

    int pf = s.find('+');
    if (pf == string::npos){
        cout << "No Money";
        return 0;
    }

    n1 = s.substr(0,pf);
    n2 = s.substr(pf+1);

    if (n1 != n2 || n1.empty() || n2.empty()){
        cout << "No Money";
        return 0;
    }
    if (n1[0]=='0' || n2[0]=='0'){
        cout << "No Money";
        return 0;
    }
    for (char c : n1){
        if (!isdigit(c)){
            cout << "No Money";
            return 0;
        }
    }
    cout << "CUTE";
}
