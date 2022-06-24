#include <bits/stdc++.h>
using namespace std;

int main(){
    int x ;
    while(cin >> x ){
        if(x==1)  {
            cout << "NO" << endl;
            continue;
        } 
        if(x==2|x==3) {
            cout << "YES\n";
            continue;
        }
        for(int i=2; i<=x/2 ; i++){
            if(x%i==0) {
                cout << "NO\n";
                break;
            }
            if(i==x/2)  cout <<"YES\n";
        }
    }
    return 0;
}