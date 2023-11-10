#include <bits/stdc++.h>
using namespace std;
int row[4] = {0, 0, 1, 1};
int col[4] = {0, 1, 0, 1};


int func(int row, int col, int N){
    int half = 1<<(N-1);
    if(N==0)    return 1;
    if(row<half && col<half) return func(row, col, N-1);
    if(row<half && col>=half) return half*half+func(row, col-half, N-1);
    if(row>=half && col<half) return 2*half*half+func(row-half, col, N-1);
    if(row>=half && col>=half) return 3*half*half+func(row-half, col-half, N-1);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, r, c;
    
    cin >> N >> r >> c;
    cout << func(r, c, N)-1;
}