// Some number of people (this number is even) have stood in a circle. The people stand in the circle evenly. They are numbered clockwise starting from a person with the number 1. Each person is looking through the circle's center at the opposite person.
// You don't know the exact number of people standing in the circle (but this number is even, no doubt). It is known that the person with the number a is looking at the person with the number b (and vice versa, of course). What is the number associated with a person being looked at by the person with the number c? If, for the specified a, b, and c, no such circle exists, output -1.


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int a=0,b=0,c=0,diff=0;
        cin>>a;
        cin>>b;
        cin>>c;
        diff=abs(a-b);
        int total=2*diff;
        if(a>total||b>total||c>total)
        {
            cout<<-1<<endl;
        }
        else if(c+diff>total)
        {
            if(c-diff>0)
            {
                cout<<c-diff<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }
        else
        {
            cout<<c+diff<<endl;
        }
    }
}