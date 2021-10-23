#include <bits/stdc++.h>
using namespace std;
int t, x, n, a = 1e9;
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> a;
        n--;
        while (n--)
        {
            cin >> x;
            a &= x;
        }
        cout << a << "\n";
    }
}