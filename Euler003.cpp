#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long int k;

long long int solve(long long int n){
    if(n%2==0){
        return solve(n/2);
    }
    else{
        if(n==1)
        return 2;
        else{
            for(long long int i=3;i*i<=n;i+=2){
                if(!(n%i))
                return solve(n/i);
            }
            return n;
        }
    }
}

int main() {
    int t;
    cin>>t;
    while(t--){
    cin>>k;
    cout<<solve(k)<<endl;
    }
    return 0;
}
