#include<bits/stdc++.h>
using namespace std;

vector<int> vec;
int N, M, num;

void backtracing(){
    if(vec.size()==M)  {
        for(auto v:vec) cout << v << " ";
        cout << '\n';
        return;
    }

    for(int i=1; i<=N; i++){
        if(find(vec.begin(), vec.end(), i) == vec.end()){
            vec.push_back(i);
            backtracing();
            vec.pop_back();
        }else   continue;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    for(int i=1; i<=N; i++){
        vec.push_back(i);
        backtracing();
        vec.pop_back();
    }
}