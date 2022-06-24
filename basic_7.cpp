#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int num ;
    char opt;
    int a1, b1 , a2 , b2;
    int a , b;
    cin >> num;
    for(int i =0 ; i<num ; i++){
        cin >> opt >> a1 >> b1 >> a2 >> b2;
        switch(opt){
            case('+') : 
                a= a1 + a2;
                b =b1 + b2;
                break;
            case('-') : 
                a= a1 - a2;
                b =b1 - b2;
                break;
            case('*') : 
                a= a1*a2 - b1 * b2;//i*i會多一個-號
                b =a1 * b2 + a2 *b1; //交叉相乘
                break;    
        }
        cout << a <<" " << b << endl;


    }
    return 0;
}