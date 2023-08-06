#include <bits/stdc++.h>
using namespace std;


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    list<int> L;
    int N, K;
    cin >> N >> K;
    for(int i = 1; i<=N; i++)
        L.push_back(i);

    auto cursor = L.begin();
    //2516403
    for(int j = 1; j<K; j++){
        cursor++;
    }
    cout << "<" << *cursor;
    auto temp = L.end();
    temp--;
    if(cursor == temp){
        L.erase(cursor);
        cursor = L.begin();
    }
    else    cursor = L.erase(cursor);
    
    while(L.size()!=0){
        for(int j = 1; j<K; j++){
            cursor++;
            if(cursor == L.end())   cursor = L.begin();
        }
        cout << ", " << *cursor;
        temp = L.end();
        temp--;
        if(cursor == temp){
            L.erase(cursor);
            cursor = L.begin();
        }
        else    cursor = L.erase(cursor);
    }

    cout << ">";
}