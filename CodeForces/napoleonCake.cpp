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
        vector<int> nums(n);
        vector<int> ans(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>nums[i];
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                if(i-nums[i]+1>0)
                {
                    ans[i-nums[i]+1]++;
                }
                else
                {
                    ans[0]++;
                }
                if(i+1<n)
                {
                    ans[i+1]--;
                }
            }
        } 
        for(int i=1;i<n;i++)
        {
            ans[i]=ans[i-1]+ans[i];
        }
        for(int i=0;i<n;i++)
        {
            if(ans[i]>0)
            {
                cout<<"1 ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}