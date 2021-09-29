#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        ll n=0;
        cin>>n;
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            int x=0;
            cin>>x;
            sum+=x;
        }
        //divide all cars equally among tracks
        //fill tracks with remaining cars one by one
        // since difference of every pair is considered,the answer will be 
        //(no of tracks with extra cars)*(no of tracks with no extra cars)
        ll a=sum%n;
        ll b=n-a;
        cout<<a*b<<endl;
    }
}   