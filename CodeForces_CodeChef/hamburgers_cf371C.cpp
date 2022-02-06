#include <bits/stdc++.h>
using namespace std;
int main()
{
        string recipe="";
        cin>>recipe;
        long long b=0,s=0,c=0;
        long long b1,s1,c1;
        long long b2,s2,c2;
        long long ans=0;
        // cout<<recipe<<endl;
        for(auto i:recipe)
        {
            // cout<<i<<" ";
            if(i=='B')
            {
                b++;
            }
            if(i=='S')
            {
                s++;
            }
            if(i=='C')
            {
                c++;
            }
        }
        // cout<<endl;
        long long money=0;
        cin>>b1>>s1>>c1;
        cin>>b2>>s2>>c2;
        cin>>money;
        long long low=0,high=1e14;
        // cout<<b<<" "<<s<<" "<<c<<endl;
        while(low<=high)
        {
            long long mid=low+(high-low)/2;
            long long br=mid*b-b1;
            long long sr=mid*s-s1;
            long long cr=mid*c-c1;
            br=br*b2;
            sr=sr*s2;
            cr=cr*c2;
            long long cost=0;
            // long long cost=br+sr+cr;
            if(br>0) cost+=br;
            if(sr>0) cost+=sr;
            if(cr>0) cost+=cr;
            if(cost<=money)
            {
                ans=mid;
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        cout<<ans<<endl;
        return 0;
}