#include <iostream>
#include <vector>
using namespace std;

int main() {

    int eb; cin >> eb;
    int cmd; cin >> cmd;

    vector<int> vi(eb);
    for (int i = 0; i < eb; i++){
        cin >> vi[i];    
    }

    while(cmd--){
        int a , b ,c;
        cin >> a >> b >> c;

        if (a == 1){
            vi[b-1] = c;
        }
        else if (a == 2){
            for (int i = b-1; i < c; i++){
                if (vi[i] == 1){
                    vi[i] = 0;
                }
                else vi[i] = 1;
            }
        }
        else if (a == 3){
            for (int i = b-1; i < c; i++){
               vi[i] = 0;
            }
        }
        else if (a == 4){
            for (int i = b-1; i < c; i++){
               vi[i] = 1;
            }
        }
    }

    for (int k : vi){
        cout << k << ' ';
    }

}