#include <bits/stdc++.h>
using namespace std;
int i, j, t, n, num, rev, m=0, temp;
void solve(){
    cin>>n;
    for(i = 100; i<=999; i++){
        for(j = 100; j<=999; j++){
            num = i * j;
            rev = 0;
            temp = num;
            while(num){
                rev *= 10;
                rev += num%10;
                num /= 10;
            }
            if(temp == rev && temp < n){
                if(temp > m)
                    m = temp;
            }
            else if(temp > n)
                break;
        }
    }
    cout<<m<<endl;
}
                    

int main(){
    cin>>t;
    while(t--){
        solve();
    }
}