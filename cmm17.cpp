#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    while( cin >> x >> y ){
        while( x!=0 && y!=0 ){
            if( x >= y ){
                x = x%y;
            }
            else if( y > x ){
                y = y%x;
            }
        }

        if( x >= y ){
            cout << x << endl;
        }
        else{
            cout << y << endl;
        }
    }

    return 0;
}
