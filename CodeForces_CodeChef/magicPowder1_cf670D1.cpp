#include <bits/stdc++.h>
using namespace std;
bool possible(vector<int> &a,vector<int> &b,int  mid,int k)
{
    int req=0;
    int n=a.size();
    for(int i=0;i<n;i++)
    {
        if(a[i]*mid-b[i]>0)
        {
            req+=mid*a[i]-b[i];
        }
    }
    if(req<=k)
    {
        return true;
    }
    return false;
}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    int low=0,high=10000;
    int ans=0;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(possible(a,b,mid,k))
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