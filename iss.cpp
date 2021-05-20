#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(0);
    int n = 4e6 + 5;
    int pi[n], a[n];
    for (int i = 0; i < n; i++)
    {
        pi[i] = i;
        a[i] = 0;
    }
    for (int p = 2; p < n; p++)
    {
        if (pi[p] == p)
        {
            pi[p] = p - 1;
            for (int i = 2 * p; i < n; i += p)
            {
                pi[i] = (pi[i] / p) * (p - 1);
            }
        }
    }
    for (int i = 1; i < n; i++)
    {
        a[i] += i - 1;
        for (int j = 2 * i; j < n; j += i)
        {
            a[j] += i * ((1 + pi[j / i]) / 2);
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        cout << a[4 * k + 1] << "\n";
    }
    return 0;
}
