#include <bits/stdc++.h>
using namespace std;

int main(){
    int x , y;
    double sum;
    while ( cin >> x >> y){
        if(x>=121){
            sum = y*(1.66*(x-120)+1.33*(x-60-(x-120))+60);
            cout << fixed << setprecision(1) <<   sum << endl;
        }
        else if(x>60 && x<121){
            sum = y*(1.33*(x-60));
            cout << fixed << setprecision(1) << sum << endl;
        }
        else cout << fixed << setprecision(1) << x*y << endl;

    }
    return 0;
}