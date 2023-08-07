#include <bits/stdc++.h>
using namespace std;


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    stack<int> st;
    int k, num;

    cin >> k;
    for(int i = 0; i<k; i++){
        cin >> num;
        if(num == 0)    st.pop();
        else            st.push(num);
    }
    
    num = 0;
    while(!st.empty()){
        num += st.top();
        st.pop();
    }
    cout << num;
}