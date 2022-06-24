#include <bits/stdc++.h>
using namespace std;

int main(){
    int  x;
    int idx;
    char input[100]  ;
    while(cin >> input){ 
        x = strlen(input);
        if(x%2!=0)idx=x/2+1;
        else idx = x/2;//跑一半次數就好
        for(int i =0 ; i<idx; i++){
            if(input[i] == input[x-1-i]) {
                if(i ==idx-1) cout  <<"YES\n";//跑到最後一個了
                continue;
            }
            else {
                cout << "NO\n";
                break;
            }

        }
    }
    return 0;
}