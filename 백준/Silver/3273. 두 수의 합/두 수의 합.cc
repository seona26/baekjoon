#include <bits/stdc++.h>
using namespace std;
int num[1000001];
bool temp[2000001] = {};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, X, ans = 0;

    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> num[i];
        temp[num[i]] = true;
    }
    cin >> X;

    for(int j = 0; j<n; j++){
        if((X-num[j]>0) && (temp[X-num[j]]==true) && (X-num[j]!=num[j])) ans++;
        temp[num[j]] = false;
    }
    cout << ans;
}