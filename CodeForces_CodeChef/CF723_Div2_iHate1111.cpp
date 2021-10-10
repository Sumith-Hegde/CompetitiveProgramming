#include <bits/stdc++.h>
using namespace std;
int main()
{
    //11 and 111 are main
    //because all others 1111,11111,111111..... can be obtained using 11 and 111
    //so n=11a+111b
    int t=0;
    cin>>t;
    while(t--)
    {
        int n=0;
        cin>>n;
        int b=n%11;
        int a=n-b*111;
        if(a>=0&&a%11==0)
        {
            cout<<"YES"<<endl;
        }       
        else
        {
            cout<<"NO"<<endl;
        }
    }
}