// problem link - https://codeforces.com/contest/1472/problem/B
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
        int count1=0;
        int count2=0;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int x=0;
            cin>>x;
            if(x==1)
            {
                count1++;
            }
            else if(x==2)
            {
                count2++;
            }
            sum+=x;
        }
        //if sum is odd then cannot divide
        if(sum%2==1)
        {
            cout<<"NO"<<endl;
        }
        //if both '1' & '2' candies are even in number then can divide
        else if(count2%2==0&&count1%2==0)
        {
            cout<<"YES"<<endl;
        }
        //if '2' candy is odd then '1' candy must be greater than or equal to 2 and even to divide
        else
        {
            if(count1-2>=0)
            {
                if((count1-2)%2==0)
                {
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
       
    }
}