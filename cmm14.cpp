#include <bits/stdc++.h>
using namespace std;

int main(){
    int sec;
    while(cin >> sec){
        cout << sec/(60*60*24) <<" days\n";
        sec%=(60*60*24);
        cout << sec/(60*60) << " hours\n";
        sec%=(60*60);
        cout << sec/60 <<" minutes\n";
        sec%=60;
        cout << sec <<" seconds\n";
    }
    return 0;
}