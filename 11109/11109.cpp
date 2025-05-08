#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;

    int d,n,s,p;
    // s : 직렬, p : 병렬 시행 시간
    // d : 병렬 개발시간, n : 다음해 동안 실행횟수

    while(t--){
        cin >> d >> n >> s >> p;
        long long int anss = 1;
        long long int ansp = 0;

        ansp = d+(n*p);
        anss = n*s;

        if (anss == ansp ){
            cout << "does not matter" << '\n';
        }
        else if (anss > ansp){
            cout << "parallelize" << '\n';
        }
        else if (anss < ansp){
            cout << "do not parallelize" << '\n';
        }

    }

}