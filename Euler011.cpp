#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int max = 0;
    int arr[20][20];
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
            cin >> arr[i][j];
    }
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            if (j < 17)
            {
                if (arr[i][j] * arr[i][j + 1] * arr[i][j + 2] * arr[i][j + 3] > max)
                    max = arr[i][j] * arr[i][j + 1] * arr[i][j + 2] * arr[i][j + 3];
                if (i < 17)
                {
                    if (arr[i][j] * arr[i + 1][j + 1] * arr[i + 2][j + 2] * arr[i + 3][j + 3] > max)
                        max = arr[i][j] * arr[i + 1][j + 1] * arr[i + 2][j + 2] * arr[i + 3][j + 3];
                }
            }
            if (i < 17)
            {
                if (arr[i][j] * arr[i + 1][j] * arr[i + 2][j] * arr[i + 3][j] > max)
                    max = arr[i][j] * arr[i + 1][j] * arr[i + 2][j] * arr[i + 3][j];
            }
            if (j > 2 && i < 17)
            {
                if (arr[i][j] * arr[i + 1][j - 1] * arr[i + 2][j - 2] * arr[i + 3][j - 3] > max)
                    max = arr[i][j] * arr[i + 1][j - 1] * arr[i + 2][j - 2] * arr[i + 3][j - 3];
            }
        }
    }
    cout << max;
}