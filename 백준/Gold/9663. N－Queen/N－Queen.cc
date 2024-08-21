#include<bits/stdc++.h>
using namespace std;
int colV[30] = {};
int leftV[30] = {};
int rightV[30] = {};
int N, cnt = 0;


void queen(int row){
    if(row == N){
        cnt++;
        return;
    }

    for(int i=0; i<N; i++){//col
        if(colV[i] || leftV[row+i] || rightV[row+N-i-1])  continue;
        colV[i] = 1;
        leftV[row+i] = 1;
        rightV[row+N-i-1] = 1;
        queen(row+1);
        colV[i] = 0;
        leftV[row+i] = 0;
        rightV[row+N-i-1] = 0;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    queen(0);
    cout << cnt;
}

