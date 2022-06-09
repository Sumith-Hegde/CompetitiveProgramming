#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    stack<int> st;
    vector<int> len(n+1);
    int maxLen=0,count=0;;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(')
        {
            st.push(i);
        }
        else
        {
            if(!st.empty())
            {
                int temp=st.top();
                st.pop();
                int add=temp-1>=0 ? len[temp-1]:0;
                len[i]=i-temp+1+add;
                if(len[i]>maxLen)
                {
                    maxLen=len[i];
                    count=1;
                }
                else
                {
                    if(len[i]==maxLen)
                    {
                        count++;
                    }
                }
            }
        }
    }
    if(maxLen==0)
    {
        cout<<0<<" "<<1<<endl;
    }
    else
    {
        cout<<maxLen<<" "<<count<<endl;
    }
    return 0;
}