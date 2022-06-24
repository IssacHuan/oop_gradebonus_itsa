#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int hour1, min1 , hour2, min2;
    int t;
    double tmp;
    while(cin >> hour1 >> min1 >> hour2 >> min2){
    if(hour2<hour1) hour2+=24;
    if(min2-min1 >=30) tmp = hour2 - hour1 + 0.5;
    else if (min2-min1<30 && min2-min1 >=0)   tmp = hour2 - hour1;
    else {
        if(60+min2-min1>=30) tmp = hour2 - hour1 - 1 + 0.5;
        else  tmp = hour2 - hour1 - 1 ;
    }
  //  cout << tmp << endl;
    if(tmp<=2) cout << tmp *2 *30 << endl;//tmp單位小時 所以*2變每半小時
   // else if (tmp ==0) cout << 30<<endl;
    else if(tmp>2 && tmp <= 4) cout << 30*4+(tmp-2)*2*40 << endl;  
    else if(tmp>4) cout << 30*4+40*4+(tmp-4)*2*60 << endl;  
    }
    return 0;
}