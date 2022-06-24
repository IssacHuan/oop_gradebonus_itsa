#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    int sum;
    while (cin >> x){
        sum =0;
        for(int i =1; i<=x ; i++){
            sum+=i;
            if(i==x) cout <<  i<< " = " << sum << endl;
            else cout << i << " + ";
        }
    }
    return 0;
}