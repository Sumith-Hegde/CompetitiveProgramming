#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="";
    cin>>s;
    stack<char> st;
    for(auto i:s)
    {
        if(st.empty())
        {
            st.push(i);
        }
        else
        {
            if(st.top()==i)
            {
                st.pop();
            }
            else
            {
                st.push(i);
            }
        }
    }
    if(st.empty())
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}