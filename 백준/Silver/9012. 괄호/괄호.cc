#include <iostream>
using namespace std;
//9012

int main(){
    int Count = 0, isVPS=0;
    string 
    Parenthesis[100];
    cin >> Count;

    for(int i = 0; i<Count; i++){
        cin >> Parenthesis[i];
        isVPS = 0;
        for(auto a : Parenthesis[i]){
            if      (a=='(')  isVPS++;
            else if (a==')')  isVPS--;
            
            if(isVPS<0) break;
        }
        if(isVPS==0)    Parenthesis[i]="YES";
        else            Parenthesis[i] = "NO";
    }
    
    for(int i = 0; i<Count; i++)
        cout << Parenthesis[i] << endl;
}