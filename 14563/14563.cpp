#include <iostream>
#include <vector>
using namespace std;



int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        int ans = 1;
        cin >> n;
        if (n == 1){
             cout << "Deficient"<< '\n';
             continue;
        }
        for (int j = 2; j < n; j++){
            if (n%j == 0){
                ans += j;
            }
        }
        
        if (ans == n){
            cout << "Perfect" << '\n';
        }
        else if (ans < n){
            cout << "Deficient" << '\n';
        }
        else if (ans > n){
            cout << "Abundant" << '\n';
        }
    }
    
}