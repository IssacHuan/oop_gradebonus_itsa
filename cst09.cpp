#include <bits/stdc++.h>
using namespace std;

int main(){
    int x , y;
    while (cin >> y >>x){
        for(int i =0; i<x ;i++){
            for(int j=0; j<y ;j++){
                cout << "*";
            }
            cout <<  endl;
        }
    }
    return 0;
}