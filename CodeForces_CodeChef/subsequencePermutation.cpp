#include <bits/stdc++.h>
using namespace std;
//sort the duplicate of given array and output count of original array element not matching with sorted array
int main()
{
    int n, t, i, p;
    cin >> t;
    while (t--)
    {
        cin >> n;
        char a[n], b[n];
        p = 0;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }

        sort(b, b + n);
        for (i = 0; i < n; i++)
            if (a[i] != b[i])
                p++;
        cout << p<< endl;
    }
}