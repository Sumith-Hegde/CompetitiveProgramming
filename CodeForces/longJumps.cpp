#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int n=0;
        cin>>n;
        vector<int> a;
        for(int i=0;i<n;i++)
        {
            int x=0;
            cin>>x;
            a.push_back(x);
        }
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            int sum=0;
            int j=i;
            while(j<n)
            {
                sum+=a[j];
                j+=a[j];
            }
            maxi=max(maxi,sum);
        }
        cout<<maxi<<endl;
    }
}