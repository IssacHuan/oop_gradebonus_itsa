#include <bits/stdc++.h>
using namespace std;

int main(){
    double side;
    double tmp;
    while(cin >> side ){
        tmp = side*side;
        tmp = (int)(tmp*10+0.5)/(10*1.0);
        cout << fixed << setprecision(1) << tmp <<endl;
    }
    return 0;
}