#include <bits/stdc++.h>
using namespace std;

int t, n, a, b;
int gcd(int x, int y) {
    if(y == 0)
        return x;
    return gcd(y, x%y);
}

long long int lcm(int x, int y) {
    return (x * y)/gcd(x, y);
}

int main() {
    cin >> t;
    long long int temp = 1;
    while(t--){
        cin >> n;
        for(int i=1; i<=n; i++)
            temp = lcm(i, temp);
        cout << temp << endl;
    }
}