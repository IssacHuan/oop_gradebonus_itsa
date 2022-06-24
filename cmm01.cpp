#include <bits/stdc++.h>
using namespace std;

int main(){
    double up  ,down , high;
    while(cin >> up >> down >> high){
        cout << "Trapezoid area:" << fixed << setprecision(1) <<  (up+down)*high/2 << endl;
    }

    return 0;
}