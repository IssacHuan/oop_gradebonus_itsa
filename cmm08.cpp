#include <bits/stdc++.h>
using namespace std;

int main(){
    int x ; 
    while(cin >> x ){
        if(x<=31)
            cout << fixed << setprecision(0) << pow(2,x) << endl;
        else cout << "Value of more than 31\n";
    }
    
    return 0;
}