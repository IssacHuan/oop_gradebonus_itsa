#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long int x;
    unsigned long long int sum ;
    while(cin >> x){
        
        sum =1;
        
        for(int i=1; i<=x ; i++){
            sum*=i;
        }
        if(x==0) cout << "1\n";
        else cout << sum << endl;
        
    }
    return 0;
}