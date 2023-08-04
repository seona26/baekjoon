#include <bits/stdc++.h>
using namespace std;
//4673
bool nums[10000] = {false, };
void d_func(int num){
    int temp = num;
    temp += num/1000; 
    num = num%1000;
    temp += num/100;
    num = num%100;
    temp += num/10;
    temp += num%10;
    if((temp <= 10000) && (nums[temp-1] == false)){
        nums[temp-1] = true;
        d_func(temp);
    }
}

int main(){
    for(int i = 0; i < 10000; i++){
        if(nums[i] == false){
            d_func(i+1);
        }
    }

    for(int i = 0; i < 10000; i++){
        if(nums[i] == false)
            cout << i+1 << endl;
    }
}