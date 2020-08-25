#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, b, c;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int max = -1;
        for (int i = 1; i <= n / 2; i++)
        {
y
            c = (int)sqrt(i * i + b * b);
            if (c + i + b == n)
                if (max < (i * b * c))
                    max = i * b * c;
        }
        if (max == 0)
            max = -1;
        cout << max << endl;
    }
}