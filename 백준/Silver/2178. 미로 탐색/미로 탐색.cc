#include <bits/stdc++.h>
using namespace std;

queue<int> que;
int n, m, cnt[100][100];
string maze[100];
int row[4] = {-1, 1, 0, 0};
int col[4] = {0, 0, -1, 1};

void BFS(){
    if(que.front()==n*m-1) return;
    
    int r = que.front()/m;
    int c = que.front()%m;
    int a, b;
    que.pop();

    for(int i = 0; i<4; i++){
        a = r+row[i];
        b = c+col[i];
        if(a<0 || a>=n) continue;
        if(b<0 || b>=m) continue;
        
        if(maze[a][b] == '1'){
            cnt[a][b] = cnt[r][c]+1;
            que.push(a*m + b);
            maze[a][b] = '0';
        }
    }
    BFS();
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for(int i = 0; i<n; i++)
        cin >> maze[i];
    que.push(0);
    cnt[0][0] = 1;
    BFS();
    cout << cnt[n-1][m-1];
}