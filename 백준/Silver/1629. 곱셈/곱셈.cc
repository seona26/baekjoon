#include <bits/stdc++.h>
using namespace std;

long long Mul(int a, int b, int c){
    long long val;
    if(b==1)    return a%c;

    val = Mul(a, b/2, c);
    val = val*val%c;
    if(b%2==0)  return val;
    return val*a % c;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a, b, c;
    cin >> a >> b >> c;
    cout << Mul(a, b, c);
}