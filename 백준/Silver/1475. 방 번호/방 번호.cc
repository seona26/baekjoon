#include <bits/stdtr1c++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, max = 0;
    int num[10] = {};
    cin >> N;
    while(N!=0){
        num[N%10]++;
        N/=10;
    }
    num[6] = (num[6]+num[9])/2+(num[6]+num[9])%2;
    num[9] = 0;
    for(int n:num)  if(n>max)   max = n;
    cout << max;
}