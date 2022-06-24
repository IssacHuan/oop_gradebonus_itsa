#include <bits/stdc++.h>
using namespace std;

int main(){
    int x , y;
    while(cin >> x >> y){
        if(abs(x)*abs(x) + abs(y)*abs(y)>40000) cout << "outside\n";
        else cout << "inside\n";
    }
    return 0;
}