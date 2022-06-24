#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ;//樓層高度
    double x, sum ;
    while(cin >> n >> x){
        sum =0;
        for(int i = 1 ; i <= n; i++ ){
            if(i%2==0) sum += (x+(x/2)*(i-1))/2 ;//偶數曾直接越過
            else {
                sum+= x+(x/2)*(i-1);  //從第一層後每層多變1.5被
            }

        }
        cout << fixed << setprecision(2) << sum << endl;
    }
    
    return 0;
}