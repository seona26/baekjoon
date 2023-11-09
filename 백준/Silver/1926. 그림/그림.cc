#include <bits/stdc++.h>
using namespace std;
queue<int> que;
int pic[250000];
int n, m, cnt = 0, NUM = 0;
int BFS(int num){
    if(que.empty()) return num;

    int u = que.front()-m;
    int d = que.front()+m;
    int l = que.front()-1;
    int r = que.front()+1;
    que.pop();

    if(pic[u] == 1 && u > 0){
        pic[u] = 0;
        que.push(u);
        num++;
    }
    if(pic[d] == 1 && d<(n*m)){
        pic[d] = 0;
        que.push(d);
        num++;
    }
    if(pic[l] == 1 && ((l+1)%m)!=0){
        pic[l] = 0;
        que.push(l);
        num++;
    }
    if(pic[r] == true && (r%m)!=0){
        pic[r] = 0;
        que.push(r);
        num++;
    }
    num = BFS(num);
    return num;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for(int i = 0; i<n; i++)
        for(int k = 0; k<m; k++){
            cin >> pic[i*m+k];
        }
        
    for(int i = 0; i<n; i++)
        for(int k = 0; k<m; k++){
            if(pic[i*m+k] == 1){
                pic[i*m+k] = 0;
                que.push(i*m+k);
                int num = BFS(1);
                NUM = NUM>num ? NUM : num;
                cnt++;
            }
        }
    cout << cnt << endl << NUM <<endl;
}