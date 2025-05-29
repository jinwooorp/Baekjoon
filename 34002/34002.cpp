#include <iostream>
#include <algorithm>

using namespace std;

#define ll long long

int main() {

    int a,b,c; cin >> a >> b >> c;
    int s,v; cin >> s >> v;
    int l; cin >> l;

    int lv = l*100;
    int mxlv = 250 * 100;
    
    int need_lv = mxlv - lv;
    int time = 0;

    while(need_lv > 0 && v > 0){
        int exp = c * 30;
        if (need_lv > exp){
            time += 30;
            need_lv -= exp;
            v--;
        }
        else {
            int min = (need_lv + c -1) /c;
            time += min;
            need_lv = 0;
        }
    }

    while(need_lv > 0 && s > 0){
        int exp = b * 30;
        if (need_lv > exp){
            time += 30;
            need_lv -= exp;
            s--;
        }
        else {
            int min = (need_lv + b -1) /b;
            time += min;
            need_lv = 0;
        }
    }


    if (need_lv > 0) {
        int mins = (need_lv + a - 1) / a;
        time += mins;
        need_lv = 0;
    }

    cout << time;
}