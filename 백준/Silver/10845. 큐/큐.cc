#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<int> que;
    int N;

    cin >> N;
    while(N-->0){
        string cmd;
        cin >> cmd;
        if(cmd == "push"){
            int X;
            cin >> X;
            que.push(X);
        }else if(cmd == "pop"){
            if(que.empty()) cout << -1 << '\n';
            else {
                cout << que.front() << '\n';
                que.pop();
            }
        }else if(cmd == "size"){
            cout << que.size() << '\n';
        }else if(cmd == "empty"){
            cout << que.empty() << '\n';
        }else if(cmd == "front"){
            if(!que.empty())    cout << que.front() << '\n';
            else cout << -1  << '\n';
        }else if(cmd == "back"){
            if(!que.empty())    cout << que.back() << '\n';
            else cout << -1  << '\n';
        }
    }
}