#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int x,y;
        string s1,s2;
        cin>>s1>>x>>s2>>y;
        string t1="";
        string t2="";
        if(s1=="0"&&s2=="0")
        {
            cout<<"="<<endl;
            continue;
        }
        if(s1.size()+x>s2.size()+y)
        {
            cout<<">"<<endl;
            continue;
        }
        if(s2.size()+y>s1.size()+x)
        {
            cout<<"<"<<endl;
            continue;
        }
        bool found=false;
        if(s1.size()>s2.size())
        {
            int abc=s1.size()-s2.size();
            for(int i=0;i<abc;i++)
            {
                // cout<<"hi\n";
                s2+='0';
            }
            // cout<<s2<<endl;
            if(stoi(s2)>stoi(s1))
            {
                cout<<"<"<<endl;
                continue;
            }
            if(stoi(s1)>stoi(s2))
            {
                cout<<">"<<endl;
                continue;
            }
            cout<<"="<<endl;
            continue;
        }
        if(s2.size()>s1.size())
        {
            for(int i=0;i<s1.size()-s2.size();i++)
            {
                s1+='0';
            }
            if(stoi(s2)>stoi(s1))
            {
                cout<<"<"<<endl;
                continue;
            }
            if(stoi(s1)>stoi(s2))
            {
                cout<<">"<<endl;
                continue;
            }
            cout<<"="<<endl;
            continue;
        }
        if(stoi(s2)>stoi(s1))
            {
                cout<<"<"<<endl;
                continue;
            }
            if(stoi(s1)>stoi(s2))
            {
                cout<<">"<<endl;
                continue;
            }
            cout<<"="<<endl;
            continue;
        // for(int i=0;i<x;i++)
        // {
        //     s1+='0';
        // }
        // for(int i=0;i<y;i++)
        // {
        //     s2+='0';
        // }
        // int ab=max(s1.size()-x,s2.size()-y);
        // for(int i=0;i<ab;i++)
        // {
        //     if(s1[i]>s2[i])
        //     {
        //         cout<<">"<<endl;
        //         found=true;
        //         break;
        //     }
        //     if(s2[i]>s1[i])
        //     {
        //         cout<<"<"<<endl;
        //         found=true;
        //         break;
        //     }
        // }
        // // for(int i=0;i<=s1.size()-x;i++)
        // // {
        // //     t1+=s1[i];
        // // }
        // // for(int i=0;i<=s2.size()-y;i++)
        // // {
        // //     t2+=s2[i];
        // // }
        // // if(t1.size()>t2.size())
        // // {
        // //     cout<<">"<<endl;
        // //     continue;
        // // }
        // // if(t2.size()>t1.size())
        // // {
        // //     cout<<"<"<<endl;
        // //     continue;
        // // }
        // // bool found=false;
        // // for(int i=0;i<t1.size();i++)
        // // {
        // //     if(t1[i]>t2[i])
        // //     {
        // //         cout<<">"<<endl;
        // //         found=true;
        // //         break;
        // //     }
        // //     if(t2[i]>t1[i])
        // //     {
        // //         cout<<"<"<<endl;
        // //         found=true;
        // //         break;
        // //     }
        // // }
        // if(!found)
        // {
        //     cout<<"="<<endl;
        // }
    }
}