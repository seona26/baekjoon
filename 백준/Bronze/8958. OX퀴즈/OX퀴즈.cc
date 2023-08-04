#include <bits/stdc++.h>
using namespace std;
#8958

int main(){
    int num, score, j, temp;
    string ans;

    cin >> num;

    for(int i=0; i<num; i++){
        j = 0;
        temp = 0;
        score = 0;
        cin >> ans;
        while(1){
            if(ans[j] == 'O'){
                temp++;
                score += temp;
            }else if(ans[j] == 'X'){
                temp = 0;
            }else{
                cout << score << endl;
                break;
            }
            j++;

        }
    }

    return 0;
}
