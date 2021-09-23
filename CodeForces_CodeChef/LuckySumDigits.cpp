#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=0;
    cin>>n;
    int sevens=0;
    int fours=0;
    bool found=false;
    for(int i=n/7;i>=0;i--)
    {
        if(i*7<=n)
        {
            sevens=i;
            if((n-7*sevens)%4==0)
            {
                fours=(n-7*sevens)/4;
                found=true;
                break;
            }
        }
    }
    if(!found)
    {
        cout<<-1<<endl;
    }
    else
    {
        for(int i=0;i<fours;i++)
        {
            cout<<"4";
        }
        for(int i=0;i<sevens;i++)
        {
            cout<<"7";
        }
    }
}