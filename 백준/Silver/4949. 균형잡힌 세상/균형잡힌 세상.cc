#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    while(true){
        string str;
        int i = 0;
        stack<char> st;
        getline(cin, str);
        if(str[0] == '.')    break;

        while(true){
            if(str[i] == '[')   st.push('[');
            if(str[i] == '(')   st.push('(');

            if(str[i] == ']'){
                if(st.empty())  break;
                if(st.top() == '[') st.pop();
                else break;
            }
            if(str[i] == ')'){
                if(st.empty())  break;
                if(st.top() == '(') st.pop();
                else break;
            }
            if(str[i] == '.')   break;

            i++;
        }
        if(st.empty() && str[i] == '.')  cout << "yes" << endl;
        else            cout << "no"  << endl;
    }
}