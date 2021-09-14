#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        long long n=0;
        cin>>n;
        //if n is less than 6 order only one 6-slice pizza
        if(n<=6)
        {
            cout<<"15"<<endl;
        }
        //if n is divisible by 6 order those many 6-slice pizzas
        else if(n%6==0)
        {
            cout<<(n/6)*15<<endl;
        }
        //if remainder is 5 order n/6 +1 extra 6-slice pizza
        else if(n%6==5)
        {
            cout<<((n/6)+1)*15<<endl;
        }
        //if remainder is 1 or 2 from n/6 6-slice pizzas remove 1 and order 1 8-slice pizza
        else if(n%6==1||n%6==2)
        {
            cout<<((n/6)-1)*15+20<<endl;
        }
        //if remainder is 3 or 4 from n/6 6-slice pizzas remove 1 and order 1 10-slice pizza
        else
        {
            cout<<((n/6)-1)*15+25<<endl;
        }      
    }
}