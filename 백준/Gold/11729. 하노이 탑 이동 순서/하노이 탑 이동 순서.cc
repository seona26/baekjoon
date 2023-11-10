#include <bits/stdc++.h>
using namespace std;

void hanoi(int str, int temp, int tar, int n){
    if(n==1){
        cout << str << ' ' << tar << '\n';
        return;
    }
    hanoi(str, tar, temp, n-1);
    cout << str << ' ' << tar << '\n';
    hanoi(temp, str, tar, n-1);
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    cout << (1<<n)-1 << '\n';
    hanoi(1, 2, 3, n);
}