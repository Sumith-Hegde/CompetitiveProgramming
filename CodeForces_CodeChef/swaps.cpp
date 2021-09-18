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
        vector<int> b(n);
        bool smaller=false;
        int start=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]<b[i])
            {
                smaller=true;
                break;
            }
            else if(a[i]>b[i])
            {
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==b[i])
            {
                start++;
            }
            else
            {
                break;
            }
        }
        if(smaller==true)
        {
            cout<<"0"<<endl;
        }
        else
        {
            int mini=0;
            int maxi=0;
            for(int i=0;i<n;i++)
            {
                if(a[i]<a[mini])
                {
                    mini=i;
                }
                if(b[i]>b[maxi])
                {
                    maxi=i;
                }
                if(a[mini]<b[maxi])
                {
                    cout<<mini+maxi-2*start<<endl;
                    break;
                }
            }
        }
    }
}