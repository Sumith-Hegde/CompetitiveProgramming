// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t=0;
//     cin>>t;
//     while(t--)
//     {
//         int a,b,c;
//         cin>>a>>b>>c;
//         int z=max(max(a,b),c);
//         if(a==b&&b==c)
//         {
//             cout<<1<<" "<<1<<" "<<1<<endl;
//         }
//         else if(z==a)
//         {
//             cout<<0<<" "<<z-b+1<<" "<<z-c+1<<endl;
//         }
//         else if(z==b)
//         {
//             cout<<z-a+1<<" "<<0<<" "<<z-c+1<<endl;
//         }
//         else
//         {
//             cout<<0<<" "<<z-b+1<<" "<<z-c+1<<endl;
//         }
//     }
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        cout << max(a, max(b, c) + 1) - a << ' ' << max(b, max(a, c) + 1) - b << ' ' << max(c, max(a, b) + 1) - c << '\n';
    }
}