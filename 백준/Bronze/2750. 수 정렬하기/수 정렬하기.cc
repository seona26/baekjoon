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
    sort(vec.begin(), vec.end());

    for(auto a: vec)    cout << a << endl;
}