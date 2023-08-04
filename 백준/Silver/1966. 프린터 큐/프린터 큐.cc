#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
//1966

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int Case, N, temp;
    queue<int> printer;
    int target = 0;
    int result[100] = {0, };

    cin >> Case;
    for(int i = 0; i < Case; i++){
        printer = queue<int>();
        int priority[100] = {0, };
        result[i] = 0;
        cin >> N >> target;
        for(int j = 0; j < N; j++){
            cin >> temp;
            printer.push(temp);
            priority[j] = temp;
        }
        sort(priority, priority+N, greater<>());
        while(true){
            if(printer.front() == priority[0]){
                printer.pop();
                if(target==0) break;
                target--;
                priority[0] = -1;
                sort(priority, priority+N, greater<>());
                result[i]++;
            }else{
                temp = printer.front();
                printer.pop();
                printer.push(temp);

                if(target == 0) target = printer.size()-1;
                else target--;
            }
        }
    }
    for(int j = 0; j < Case; j++)
        cout << result[j]+1<< '\n';
}