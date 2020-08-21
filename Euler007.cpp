#include <bits/stdc++.h>
using namespace std;
int n;
unsigned long long int i=3;


bool prime(unsigned long long int w){
    for(long long int i=2; i<=sqrt(w); i++)
    {
        if(w%i==0)
        return 0;
    }
    return 1;
}

int main(){
    int t;
    vector<unsigned long long int> vect;
    vect.push_back(2);
    while(vect.size() != 10000){
    if(prime(i))
    vect.push_back(i);
    i += 2;
    }
    cin >> t;
    while(t--){
        cin >> n;
        cout << vect[n-1] <<endl;
    }
}