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
        int mini=INT32_MAX;
        int maxi=INT32_MIN;
        int maxIndex=0;
        int minIndex=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            // cout<<a[i]<<endl;
            if(mini>a[i])
            {
                mini=a[i];
                minIndex=i;
            }
            if(maxi<a[i])
            {
                maxi=a[i];
                maxIndex=i;
            }
        }
        int count=0;
        // cout<<maxIndex<<endl;
        // cout<<minIndex<<endl;
        int x=max(minIndex,maxIndex)+1;
        int y=minIndex+n-maxIndex+1;
        int z=maxIndex+n-minIndex+1;
        int w=max(n-minIndex,n-maxIndex);
        cout<<min(min(w,x),min(y,z))<<endl;
    }
}