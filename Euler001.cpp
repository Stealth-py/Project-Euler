#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long long int t,n,sum;
    cin>>t;
    while(t--){
    cin>>n;
    sum=0;
    n--;
    sum += 3*(n/3)*(n/3+1);
    sum += 5*(n/5)*(n/5+1);
    sum -= 15*(n/15)*(n/15+1);
    cout<<sum/2<<endl;
        } 
    return 0;
}