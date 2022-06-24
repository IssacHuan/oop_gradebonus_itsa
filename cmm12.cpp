#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    double d = 1-30*2.54/100;
    int out;
    while(cin >> x){
        if(x/d>(int)(x/d)) cout << (int)(x/d)+1 << endl;
        else cout << (int)(x/d) << endl;

    }

    return 0;
}