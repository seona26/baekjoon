#include <bits/stdtr1c++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> vex(26);
    string s;
    cin >> s;
    for(int i = 0; i<s.size(); i++) vex[s[i]-'a']++;
    for(int n:vex)  cout << n << " ";
}