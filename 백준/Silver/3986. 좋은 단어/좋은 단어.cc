#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, cnt = 0;
    cin >> N;
    for(int i = 0; i<N; i++){
        string str;
        stack<char> st;
        cin >> str;
        for(auto c : str){
            if(st.empty())  st.push(c);
            else if(st.top() == c)  st.pop();
            else                    st.push(c);
            
        }
        if(st.empty()) cnt++;
    }
    cout << cnt;
}