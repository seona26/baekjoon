#include <bits/stdtr1c++.h>
using namespace std;
//x보다 작은 수
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, X;
    int temp;
    cin >> N >> X;
    for(int i = 0; i<N; i++){
        cin >> temp;
        if(temp<X)  cout << temp << " ";
    }
}