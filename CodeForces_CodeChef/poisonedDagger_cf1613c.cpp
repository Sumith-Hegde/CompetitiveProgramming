#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        long long n, he;
        cin >> n >> he;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long l = 0, h = he;
        long long k = 0;
        while (l <= h)
        {
            long long m = l + (h - l) / 2;
            long long temp = 0;
            long long prev = 0;
            for (int i = 0; i < a.size(); i++)
            {
                if (prev < a[i])
                {
                    temp += m;
                }
                else
                {
                    temp += a[i] + m - 1 - prev;
                }
                prev = a[i] + m - 1;
            }
            if (temp >= he)
            {
                k = m;
                h = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        cout << k << endl;
    }
    return 0;
}

