#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long long int t,n,i=1,j=1,temp,sum=0;
    cin>>t;
    while(t--){
        i=1,j=1,sum=0;
        cin>>n;
        while(i+j<=n){
            temp = j;
            j = i+ j;
            i = temp;
            // cout<<endl<<j<<" ";
            // cout<<endl<<sum<<" ";
            if(j%2==0)
            sum+=j;           
        }
    cout<<sum<<endl;
    } 
    return 0;
}
