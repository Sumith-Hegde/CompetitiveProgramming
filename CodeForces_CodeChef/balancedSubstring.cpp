// problem link - https://codeforces.com/contest/1569/problem/A
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
        string s;
        cin>>s;
        map<int,int> m;
        int sum=0;
        bool found=false;
        int i=0;
        int j=0;
        //'a' => 1
        //'b' => -1
        //find a sub-array with sum=0 using prefix sum + hashing method
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a')
            {
                sum+=1;
            }
            else if(s[i]=='b')
            {
                sum-=1;
            }
            if(sum==0)
            {
                cout<<1<<" "<<i+1<<endl;
                found=true;
                break;
            }
            else
            {
                if(m.find(sum)!=m.end())
                {
                    cout<<m[sum]+2<<" "<<i+1<<endl;
                    found=true;
                    break;
                }
                else
                {
                    m[sum]=i;
                }
            }
            
        }
        if(!found)
        {
            cout<<"-1 -1"<<endl;
        }
    }
}