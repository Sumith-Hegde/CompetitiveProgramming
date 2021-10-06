#include <bits/stdc++.h>
using namespace std;
int n=0;
int m=0;
bool valid(int i,int j)
{
    if(i<0||j<0||i>=n||j>=m)
    {
        return false;
    }
    return true;
}
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        vector<vector<char>> f(n,vector<char>(m,'-'));
        vector<vector<int>> v(n,vector<int>(m,0));
        pair<int,int> p={0,0};
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>f[i][j];
                if(f[i][j]!='.')
                {
                    p={i,j};
                }
            }
        }       
        int t1=p.first;
        int t2=p.second;
        queue<pair<int,int>> q;
        if(f[t1][t2]=='.')
        {
            f[t1][t2]='W';
            p={t1,t2};
        }
        q.push(p);
        vector<int> dx={0,1,0,-1};
        vector<int> dy={1,0,-1,0};
        map<char,char> mpp;
        mpp['W']='R';
        mpp['R']='W';
        bool possible=true;
        while(!q.empty()&&possible)
        {
            auto cur=q.front();
            int x=cur.first;
            int y=cur.second;
            q.pop();
            for(int i=0;i<4;i++)
            {
                int nx=x+dx[i];
                int ny=y+dy[i];
                if(valid(nx,ny))
                {
                    if(v[nx][ny]==1)
                    {
                        if(f[nx][ny]!=mpp[f[x][y]])
                        {
                            possible=false;
                            break;
                        }
                    }
                    else
                    {
                        if(f[nx][ny]=='W'||f[nx][ny]=='R')
                        {
                            if(f[nx][ny]!=mpp[f[x][y]])
                            {
                                possible=false;
                                break;
                            }
                            else
                            {
                                q.push({nx,ny});
                                v[nx][ny]=1;
                            }
                        }
                        else
                        {
                            f[nx][ny]=mpp[f[x][y]];
                            v[nx][ny]=1;
                            q.push({nx,ny});
                        }
                    }
                }
            }
        }
        if(!possible)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    cout<<f[i][j];
                }
                cout<<endl;
            }
        }
    }
}