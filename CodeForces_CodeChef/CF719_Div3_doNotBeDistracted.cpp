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
        int no=0;
        vector<char> a(n);
        map<char,bool> m;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]]=false;
        }
        for(int i=0;i<n;i++)
        {
            if(m[a[i]])
            {
                cout<<"NO"<<endl;
                no=1;
                break;
            }
            if(!m[a[i]])
            {
                m[a[i]]=true;
                i++;
                while(i<n&&a[i]==a[i-1])
                {
                    i++;
                }
                i--;
            }
        }
        if(!no)
        {
            cout<<"YES"<<endl;
        }
    }
}