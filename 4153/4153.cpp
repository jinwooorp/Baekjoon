#include <bits/stdc++.h>

using namespace std;

int main() {

    vector<int> s;

    while(!cin.eof()){

       for (int i = 0; i < 3; i++){
            int in;
            cin >> in;
            s.push_back(in);
       }
       if (s[0] == 0 && s[1] == 0 && s[2] ==0){
            return 0;
       }
       sort(s.begin(),s.end());

       if (s[2] * s[2] == (s[0] * s[0]) + (s[1] * s[1])){
        cout << "right" << '\n';
       }
       else {
        cout << "wrong" << '\n';
       }
       s.clear();
    }

}