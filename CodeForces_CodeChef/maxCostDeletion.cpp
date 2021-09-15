#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int n=0,a=0,b=0;
        cin>>n;
        cin>>a;
        cin>>b;
        string s;
        cin>>s;
        int cost=0;
        //a*l+b
        //no matter what operation we choose result of 'a' part will be a*n
        //for 'b' part
        //if'b' is -ve then we need that to be added minimum times therfore delete by group to reduce addition of 'b'
        //so max cost will be a*n+(number of group deletions)*b
        //to find number of groups to delete just calculate number of all different groups and then take half of it and add 1 to it
        //because after deleting a group , groups on both sides of that group will merge and form single group
        //ex :- before deletion - 100111    after deletion of '00' - 1111
        int groups=0;
        for(int i=1;i<n;i++)
        {
            if(s[i]!=s[i-1])
            {
                groups++;
            }
        }
        groups++;
        int grpsToDelete=(groups/2)+1; 
        //if b>=0 then we will do deletion one by one to increase addition of 'b'
        //so max cost will be 'a*n+b*n'
        if(b<0)
        {
            cost=a*n+grpsToDelete*b;
        }
        else
        {
            cost=a*n+b*n;
        }
        cout<<cost<<endl;
    }
}