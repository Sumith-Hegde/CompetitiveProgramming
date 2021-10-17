#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n;
        m = 1;
        while (m * 2 <= n)
            m *= 2;
        cout << m - 1 << '\n';
    }
}