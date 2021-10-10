#include <iostream>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        if (n == 2)
            cout << -1 << endl;
        else
        {
            int k = 2;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (k > n * n)
                        k = 1;
                    cout << k << " ";
                    k += 2;
                }
                cout << endl;
            }
        }
    }
}
