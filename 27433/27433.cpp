#include <iostream>

using namespace std;

long long int p(int m){

    if (m == 1 || m == 0){
        return 1;
    }
    return m*p(m-1);
}

int main() {

    int n;
    cin >> n;

    cout << p(n);
    

}