#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin>> n;
    int cnt = 1;
    stack<int> st;

    for (int i =0; i < n; i++){
        int in; cin >> in;
        if (in == cnt){
            cnt++;
        }
        else st.push(in);
  

        while(!st.empty() && st.top() == cnt){
            st.pop();
            cnt++;
        }
    }
    if(st.empty()) cout << "Nice";
    else cout << "Sad";

}