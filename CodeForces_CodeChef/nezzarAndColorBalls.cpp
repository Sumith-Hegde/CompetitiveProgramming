// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t=0;
//     cin>>t;
//     while(t--)
//     {
//         int n=0;
//         cin>>n;
//         vector<int> a(n);
//         int maxi=1;
//         int count=1;
//         for(int i=0;i<n;i++)
//         {
//             cin>>a[i];
//             if(i>0)
//             {
//                 if(a[i]==a[i-1])
//                 {
//                     count++;
//                     // cout<<"hi"<<endl;
//                 }
//                 else
//                 {
//                     maxi=max(maxi,count);
//                     count=1;
//                 }
//             }
//         }
//         cout<<maxi<<endl;
//     }
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l = 0, k;
        cin >> n;
        map<int, int> m;
        while (n--)
        {
            cin >> k;
            l = max(l, ++m[k]);
        }
        cout << l << endl;
    }
    return 0;
}