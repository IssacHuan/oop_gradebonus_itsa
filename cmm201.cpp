#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;


int main(){
    string x;
    int n;
    int a , b ,c ;
    while(cin  >> x){
        n = x.length();
        int num = std::atoi(x.c_str());
        if(n==3){
            a = (x[0]-'0') * (x[0] - '0')  * (x[0] - '0');
            b = (x[1]-'0') * (x[1] - '0')  * (x[1] - '0');
            c = (x[2]-'0') * (x[2] - '0')  * (x[2] - '0');
            if(a+b+c==num) cout << "1\n";
            else cout << "0\n";
        }
        else if(n==2){
            a = (x[0]-'0') * (x[0] - '0')  * (x[0] - '0');
            b = (x[1]-'0') * (x[1] - '0')  * (x[1] - '0');
            c = 0;
            if(a+b+c==num) cout << "1\n";
            else cout << "0\n";
        }
        else if(n==1){
            a = (x[0]-'0') * (x[0] - '0')  * (x[0] - '0');
            b = 0;
            c = 0;
            if(a+b+c==num) cout << "1\n";
            else cout << "0\n";
        }

    }
    return 0;
}