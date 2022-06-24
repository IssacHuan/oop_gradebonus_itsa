#include <bits/stdc++.h>
using namespace std;


int  f(int i){
    if(i==0|i==1) return i+1;
    else{
        if(i>1){
            return f(i-1) + f(i/2) ;
        }
    }
}


int main(){
    int n;
    while(cin >> n)
    cout << f(n) <<endl;
    return 0;
}




