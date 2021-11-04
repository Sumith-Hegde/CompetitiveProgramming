#include <bits/stdc++.h>
using namespace std;
// to reach (n,m) you need n down +m right steps
// right costs x and down costs y
int main()
{
    int t, n, m, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> k;
        if (k == n * m - 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}

