#include <bits/stdc++.h>
using namespace std;
int n,m;
int fx,fy,sx,sy;
vector<int> dx={-1,0,1,0};
vector<int> dy={0,1,0,-1};
bool valid(int x,int y)
{
    if(x<0||y<0||x>=n||y>=m) return false;
    return true;
}
void dfs(int x,int y,int &ans,vector<vector<char>> &a,vector<vector<int>> visited,int c)
{
    if(!valid(x,y))
    {
        return;
    }
    if(x==fx&&y==fy&&c==m*n-1)
    {
        ans++;
        return;
    }
    visited[x][y]=1;
    if(a[x][y]!='*')
    {
        int nx=x+dx[a[x][y]-'0'-1];
        int ny=y+dy[a[x][y]-'0'-1];
        if(valid(nx,ny)&&visited[nx][ny]==0) dfs(nx,ny,ans,a,visited,c+1);
    }
    else
    {
        for(int i=0;i<4;i++)
        {
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(valid(nx,ny)&&visited[nx][ny]==0) dfs(nx,ny,ans,a,visited,c+1);
        }
    }
    // if(x!=sx||y!=sy) visited[x][y]=0;
}
int main()
{
    cin>>n>>m;
    string s="";
    cin>>s;
    int x=0;
    vector<vector<char>> a(n,vector<char>(m));
    vector<vector<int>> visited(n,vector<int>(m,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            a[i][j]=s[x];
            x++;
        }
    }
    sx=n-1;
    sy=0;
    fx=n-1;
    fy=m-1;
    int ans=0;
    if(a[sx][sy]!='*')
    {
        dfs(sx+dx[a[sx][sy]-'0'-1],sy+dy[a[sx][sy]-'0'-1],ans,a,visited,1);
    }
    else
    {
        for(int i=0;i<4;i++)
        {
            dfs(sx+dx[i],sy+dy[i],ans,a,visited,1);
        }
    }
    cout<<ans<<endl;
    return 0;
}