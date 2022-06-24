#include <bits/stdc++.h>
using namespace std;

int main(){
    int x; 
    while(cin >> x){
        cout << "NT10="<<x/10<<endl;
        x%=10;
        cout << "NT5="<<x/5<<endl;
        x%=5;
        cout << "NT1="<<x<<endl;
    }
    
    return 0;
}