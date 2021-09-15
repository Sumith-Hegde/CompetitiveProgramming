#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int n=0;
        cin>>n;
        vector<int> players(n);
        map<int,int> m;
        vector<vector<char>> s(n,vector<char>(n,'='));
        //diagonal elements should be X
        for(int i=0;i<n;i++)
        {
            s[i][i]='X';
        }
        int type1=0;
        int type2=0;
        string types;
        cin>>types;
        for(int i=0;i<n;i++)
        {
            players[i]=types[i]-'0';
            if(players[i]==1)
            {
                type1++;
            }
            else
            {
                m[type2]=i;
                type2++;
            }
        }
        //type1 => does not want to lose
        //type2 => win atleast one
        //type2 players should score win only against other type2 players to satisfy all type1 players
        //so if there is only one type2 player everyone cannot be satisfied
        //if there are 2 type2 players even then everyone cannot be satisfied because there is only one game between 2 chosen players
        //so whenever type2 players are more than 2 in number everyone can be satisfied
        //all win of type2 players can be made in a cycle and rest of the games can be drawn to satisfy everyone
        //ex :- say players 2 , 5 , 8 & 9 are type2 players
        //      then 2->5->8->9->2 where '->' imples win make other games as a draw and everyone will be satisfied
        if(type2==1||type2==2)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            for(auto i: m)
            {
                s[i.second][m[(i.first+1)%type2]]='+';
                s[m[(i.first+1)%type2]][i.second]='-';
            }
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    cout<<s[i][j];
                }
                cout<<endl;
            }
            // for(int i=0;i<n;i++)
            // {
            //     s[i][i]='=';
            // }
        }       
    }
}