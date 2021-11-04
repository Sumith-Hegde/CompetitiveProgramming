#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 1;
        cin >> n;
        while (n)
        {
            ans = max(ans, n % 10);
            n /= 10;
        }
        cout << ans << endl;
    }
}
