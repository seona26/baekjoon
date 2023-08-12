#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<int> que;
    int N, temp = 1;

    cin >> N;
    while(temp <= N)    que.push(temp++);
    while(que.size() != 1){
        que.pop();
        que.push(que.front());
        que.pop();
    }
    cout << que.back();
}