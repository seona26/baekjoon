#include<bits/stdc++.h>
using namespace std;
int n, s, cnt = 0;
int arr[20];

void func(int val,int index){
    if(val==s&&index!=0)      cnt++;
    if(index==n)    return;

    for(int i=index; i<n; i++){
        func(val+arr[i], i+1);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie();

    cin >> n >> s;
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    func(0, 0);

    cout << cnt;
}