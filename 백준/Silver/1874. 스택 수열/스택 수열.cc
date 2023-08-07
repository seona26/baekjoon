#include <bits/stdc++.h>
using namespace std;


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, num, cnt = 1;
    stack<int> st;
    string ans = "";
    
    cin >> n;
    while(n--){
        cin >> num;
        if(st.empty()){
            st.push(cnt++);
            ans +="+\n";
        }
        while(st.top()!=num && num !=-1){
            st.push(cnt++);
            ans +="+\n";
            if(st.top()>num){
                cout << "NO";
                return 0;
            }
        }
        st.pop();
        ans +="-\n";

    }
    cout << ans;
}