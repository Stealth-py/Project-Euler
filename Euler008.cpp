#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, k, max;
    unsigned long long int temp;
    string N;
    cin >> t;
    while (t--)
    {
        max = 0;
        cin >> k >> n >> N;
        for (int i = 0; i <= k - n; i++)
        {
            temp = 1;
            for (int j = 0; j < n; j++)
                temp *= N[i + j] - '0';
            if (temp > max)
                max = temp;
        }
        cout << max << endl;
    }
}