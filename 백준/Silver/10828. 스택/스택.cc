#include <bits/stdc++.h>
using namespace std;


int main(void) {
	ios::sync_with_stdio(0);
    cin.tie(0);

    int N, num, data[10000], pos = 0;
    string cmd;
    cin >> N;
    for(int i = 0; i<N; i++){
        cin >> cmd;
        if(!cmd.compare("push")){
            cin >> num;
            data[pos++] = num;
        }else if(!cmd.compare("pop")){
            if(pos == 0)    cout << -1 << '\n';
            else            cout << data[--pos] << '\n';
           
        }else if(!cmd.compare("size")){
            cout << pos << '\n';
        }else if(!cmd.compare("empty")){
            if(pos == 0)    cout << 1 << '\n';
            else            cout << 0 << '\n';
        }else{
            if(pos == 0)    cout << -1 << '\n';
            else            cout << data[pos-1] << '\n';
        }
    }
}