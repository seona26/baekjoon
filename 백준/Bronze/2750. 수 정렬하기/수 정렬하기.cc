#include<bits/stdc++.h>>
using namespace std;
int N;
vector<int> vec;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i = 0; i<N; i++){
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }
    for(int i = 1; i<N; i++){
        for(int j = i; j>0; j--){
            if(vec[j]<vec[j-1]) swap(vec[j], vec[j-1]);
        }c
    }

    for(auto a: vec)    cout << a << endl;
}
