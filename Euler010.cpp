#include <bits/stdc++.h>
using namespace std;
bool primearr[1000001];

int main()
{
    for (long a = 0; a < 1000001; a++)
        primearr[a] = 1;
    primearr[1] = 0;
    unsigned long long int temp = 0;
    for (int i = 2; i <= 1000; i++)
    {
        if (primearr[i])
        {
            for (long j = i * i; j <= 1000001; j += i)
                primearr[j] = 0;
        }
    }
    unsigned long long int sumarr[1000001] = {};
    for (long i = 2; i <= 1000001; i++)
    {
        sumarr[i] += sumarr[i - 1];
        if (primearr[i])
            sumarr[i] += i;
    }
    long t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << sumarr[n] << endl;
    }
}
