#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    int m = 0;
    cin >> n >> m;
    int steps = 0;
    while (n != m)
    {
        if (m > n)
        {
            if (m % 2 == 0)
            {
                m /= 2;
                steps++;
            }
            else
            {
                m++;
                steps++;
            }
        }
        else if (n > m)
        {
            m++;
            steps++;
        }
    }
    cout << steps << endl;
    return 0;
}

