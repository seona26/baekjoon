#include <bits/stdc++.h>
using namespace std;
char str[1000000] = {};
list<char> N;


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    char cmd, c;
    int M, idx = 0;
    cin >> str;
    cin >> M;
    
    while(str[idx]!=0){
        N.push_back(str[idx++]);
    }

    auto cursor = N.end();

    while(M>0){
        cin >> cmd;
        switch (cmd){
            case 'L':
                if(cursor!=N.begin())   cursor--;
                break;
            case 'D':
                if(cursor!=N.end()) cursor++;
                break;
            case 'B':
                if(cursor!=N.begin()){
                    cursor--;
                    cursor = N.erase(cursor);
                }
                break;
            case 'P':
                cin >> c;
                N.insert(cursor, c);
                break;
        }
        M--;
    }

    auto temp = N.begin();
    while(temp!=N.end()){
        cout << *temp++;
    }
}