#include <bits/stdtr1c++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A, B, C;
    int num[10]={};
    cin >> A >> B >> C;
    A = A*B*C;
    while(A!=0){
        num[A%10]++;
        A/=10;
    }
    for(int n:num)  cout << n << "\n";
}