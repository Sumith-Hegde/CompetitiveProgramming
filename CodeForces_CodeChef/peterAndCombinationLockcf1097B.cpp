#include <bits/stdc++.h>
using namespace std;
bool tryCombination(vector<int> &a,int i,int sum)
{
    if(i>=a.size())
    {
        if(sum==0||sum%360==0)
        {
            return true;
        }
        return false;
    }
    return tryCombination(a,i+1,sum+a[i])||tryCombination(a,i+1,sum-a[i]);
}
int main()
{
    int n=0;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(tryCombination(a,0,0))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}