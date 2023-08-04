#include <bits/stdc++.h>
using namespace std;
#1110
int main(){
    int num, newNum=-1, temp, Count = 0;
    cin >> num;
    temp = num;

    while(num != newNum){
        newNum = temp/10;//left
        temp = temp%10;//right
        newNum = temp*10+(temp+newNum)%10;
        temp = newNum;
        Count++;
    }
    cout << Count;
    return 0;
}
