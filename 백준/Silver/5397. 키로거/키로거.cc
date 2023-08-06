#include <bits/stdc++.h>
using namespace std;


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int M, idx = 0;
    cin >> M;

    while(M-->0){
        char str[1000000] = {};
        list<char> L;
        cin >> str;
        auto cursor = L.end();
        while(str[idx] != 0){
            char c = str[idx++];
            switch (c){
                case '<':
                    if(cursor!=L.begin())   cursor--;
                    break;
                case '>':
                    if(cursor!=L.end()) cursor++;
                    break;
                case '-':
                    if(cursor!=L.begin()){
                        cursor--;
                        cursor = L.erase(cursor);
                    }
                    break;
                default:{}
                    L.insert(cursor, c);
            }
        }
        for(auto i:L)
            cout << i;
        cout << '\n';
        idx = 0;
    }
}