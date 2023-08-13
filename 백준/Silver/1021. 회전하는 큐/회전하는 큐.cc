#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    deque<int> deq;
    int N, M, num = 1, ans = 0;

    cin >> N;
    while(num <= N)  deq.push_back(num++);

    cin >> M;
    while(M-->0){
        cin >> num;
        int idx = find(deq.begin(), deq.end(), num)-deq.begin();
        if(idx <= (deq.size()-idx)){
            for(int i = 0; i<idx; i++){
                deq.push_back(deq.front());
                deq.pop_front();
                ++ans;
            }
        }else{
            for(int i = 0; i<deq.size()-idx; i++){
                deq.push_front(deq.back());
                deq.pop_back();
                ++ans;
            }
        }
        deq.pop_front();
    }
    cout << ans;
}