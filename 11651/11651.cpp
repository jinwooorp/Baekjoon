#include <iostream>
#include <algorithm>
using namespace std;

struct Data {
    int x,y;
};

bool Compare(Data a, Data b){
    if (a.y == b.y){
        return a.x < b.x;
    }
    else return a.y < b.y;
}

int main() {

    Data arr[200'001] = {0,};

    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++){
        cin >> arr[i].x >> arr[i].y;
    }
    
    sort(arr,arr+n,Compare);

    for (int i = 0; i < n; i++){
        cout << arr[i].x << ' ' << arr[i].y << '\n';
    }
}