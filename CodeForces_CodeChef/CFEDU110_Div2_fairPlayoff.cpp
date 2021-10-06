#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        vector<int> a(4);
        vector<int> b(4);
        for(int i=0;i<4;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b.begin(),b.end());
        int maxi1=max(a[0],a[1]);
        int maxi2=max(a[2],a[3]);
        int m1=b[3];
        int m2=b[2];
        if((maxi1==m1||maxi1==m2)&&maxi2==m1||maxi2==m2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}