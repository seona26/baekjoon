#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    deque<int> deq;
    int N, X;
    string cmd;
    cin >> N;
    while(N-->0){
        cin >> cmd;
        if(cmd == "push_front"){
            cin >> X;
            deq.push_front(X);
        }else if(cmd == "push_back"){
            cin >> X;
            deq.push_back(X);
        }else if(cmd == "pop_front"){
            if(!deq.empty()){
                cout << deq.front() << '\n'; 
                deq.pop_front();
            }else   cout << -1 << '\n';
        }else if(cmd == "pop_back"){
            if(!deq.empty()){
                cout << deq.back() << '\n'; 
                deq.pop_back();
            }else   cout << -1 << '\n';
        }else if(cmd == "size"){
            cout << deq.size() << '\n';
        }else if(cmd == "empty"){
            cout << deq.empty() << '\n';
        }else if(cmd == "front"){
            if(!deq.empty()){
                cout << deq.front() << '\n';
            }else   cout << -1 << '\n';
        }else if(cmd == "back"){
            if(!deq.empty()){
                cout << deq.back() << '\n'; 
            }else   cout << -1 << '\n';
        }
    }
}