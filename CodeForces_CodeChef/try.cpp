#include <bits/stdc++.h>
using namespace std;
int findPaths(int total,int index,int n,int multi,int num,vector<int> &a)
{
    int count=0;
    if(index>n-1)
    {
        if(num==0)
        {
            if(total%multi==0)
            {
                return (count+1)%998244353;
            }
            else return 0;
        }
        else{
            return 0;
        }
    }
    count += max(findPaths(total+a[index],index+1,n,multi,num-1,a),findPaths(total,index+1,n,multi,num,a));
    return count;
}
int main()
{
    // int n=0,x=0,y=0;
    // vector<int> a;
    // cin>>n;
    // cin>>x;
    // cin>>y;
    // for(int i=0;i<n-1;i++)
    // {
    //     int p;
    //     cin>>p;
    //     a.push_back(p);
    // }
    // a.push_back(0);
    // int print=findPaths(0,0,n,x,y,a);
    // cout<<2*print<<endl;
    // return 0;
    string s="hi";
    string p=" ";
    cout<<(s[2]==p[0]);
    return 0;
}