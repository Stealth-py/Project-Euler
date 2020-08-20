#include <bits/stdc++.h>
using namespace std;

int main(){
    long t,n;
    cin >> t;
    while(t--){
        cin >> n;
        unsigned long long int a = ((n*(n+1))/2)*((n*(n+1))/2), b = ((n*(n+1)*(2*n+1))/6);
        cout << a-b <<endl;
    }
}