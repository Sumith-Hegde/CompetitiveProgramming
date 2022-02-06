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
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int i=0;
        int j=n-1;
        bool found=false;
        while(i<j)
        {
            if(a[i]!=a[j])
            {
                found=true;
                break;
            }
            else
            {
                i++;
                j--;
            }
        }
        if(!found)
        {
            cout<<"YES"<<endl;
            continue;
        }
        int x=a[i];
        int y=a[j];
        i=0;
        j=n-1;
        bool found1=true;
        while(i<j)
        {
            if(a[i]==x)
            {
                i++;
                continue;
            }
            if(a[j]==x)
            {
                j--;
                continue;
            }
            if(a[i]!=a[j])
            {
                found1=false;
                break;
            }
            else
            {
                i++;
                j--;
            }
        }
        i=0;
        j=n-1;
        bool found2=true;
        while(i<j)
        {
            if(a[i]==y)
            {
                i++;
                continue;
            }
            if(a[j]==y)
            {
                j--;
                continue;
            }
            if(a[i]!=a[j])
            {
                found2=false;
                break;
            }
            else
            {
                i++;
                j--;
            }
        }
        found=found1||found2;
        if(found)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}