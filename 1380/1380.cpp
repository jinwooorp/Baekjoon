#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {

     int num = 1;

    while(true){
        vector<string> vs;
        int count[101] = {0};
        int n; cin>>n;

        if (n == 0) break;
        cin.ignore();
        for (int i = 1; i <= n; i++){
            string s; getline(cin,s);
            vs.push_back(s);
        }

        for (int j = 0; j < (2*n)-1;j++){
            int m; char c;
            cin >> m >> c;
            count[m]++;
        }

        for (int k = 1; k <= n; k++){
            if (count[k] == 1) cout << num << " " << vs[k-1] << '\n';
        }
        num++;
    }
}