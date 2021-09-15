// problem link - https://codeforces.com/contest/1556/problem/B
#include <bits/stdc++.h>
using namespace std;
//function to count number of swaps
int start(int x,vector<int> &a)
{
    int ans=0;
    int b=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=x)
        {
            //if expected and actual do not match update b
            //update is done by x-a[i] because (even,odd) &( odd,even) should cancel out each other
            b+=x-a[i];
        }
        // abs of b is added to answer each time because swaps should happen between neighbours only 
        // so if counter-part is far all those swaps should be done 
        ans+=abs(b);
        //alternate x with 0&1 because even and odd should be alternate
        x=(x^1);
    }
    return ans;
}
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int n=0;
        int odd=0;
        int even=0;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a[i]=x%2;
            if(x%2)
            {
                odd++;
            }
            else{
                even++;
            }
        }
        //if difference between number of even and odd numbers is more than 1 then we cannot arrange alternatively
        if(abs(even-odd)>1)
        {
            cout<<"-1"<<endl;
        }
        else if(n%2==0)
        {
            //if total numbers is even then both even and odd count should be equal
            if(even==odd)
            {
                //if even==odd then seq can start either with even or odd
                //so choose min of those
                cout<<min(start(0,a),start(1,a))<<endl;
            }
            else
            {
                cout<<"-1"<<endl;
            }
        }
        else
        {
            if(even>odd)
            {
                //if even>odd seq should start with even
                cout<<start(0,a)<<endl;
            }
            else
            {
                //if even<odd seq should start with odd
                cout<<start(1,a)<<endl;
            }
        }

    }
}