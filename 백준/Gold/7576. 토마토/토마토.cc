#include <bits/stdc++.h>
using namespace std;
int row[4] = {0, -1, 0, 1};
int col[4] = {-1, 0, 1, 0};
queue<pair<int, int> > que;
int box[1000][1000]={0, };
int m, n, days = 0; //m = col, n = row

void bfs(){
    int cnt = que.size();
    for(int i = 0; i<cnt; i++){
        pair<int, int> temp = que.front();
        que.pop();
        for(int k = 0; k<4; k++){
            int r = temp.first+row[k];
            int c = temp.second+col[k];
            if(r>=0&&r<n && c>=0&&c<m){
                if(box[r][c]==0){
                    box[r][c] = 1;
                    que.push(make_pair(r, c));
                }
            }
        }
    }
    if(que.empty()) return;
    days++;
    bfs();
}

bool isRipe(){
    for(int i = 0; i<n; i++){
        for(int k = 0; k<m; k++){
            if(box[i][k] == 0)  return false;
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num;
    cin >> m >> n;
    for(int i = 0; i<n; i++){
        for(int k = 0; k<m; k++){
            cin >> num;
            box[i][k] = num;
            if(num == 1)    que.push(make_pair(i, k));
        }
    }
    bfs();
    if(isRipe() )cout << days;
    else cout << -1;
}