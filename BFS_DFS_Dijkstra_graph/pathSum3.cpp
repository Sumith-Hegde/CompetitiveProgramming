// pathSum3 (leetcode)
// Link to the problem - https://leetcode.com/problems/surrounded-regions/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    //all the 'O' connected to 'O' on the edges cannot be captured
    //all other 'O' must be captured
    //perform dfs on all 'O' at the edges and mark them visited 
    //make all 'O' that are not visited during dfs into 'X'
    vector<int> dx={0,-1,0,1};
    vector<int> dy={1,0,-1,0};
    int n=0;
    int m=0;
    bool valid(int x,int y)
    {
        if(x<0||x>=n||y<0||y>=m) return false;
        return true;
    }
    void dfs(vector<vector<char>> &board,int i,int j,vector<vector<int>> &visited)
    {
        visited[i][j]=1;
        for(int k=0;k<4;k++)
        {
            int nx=i+dx[k];
            int ny=j+dy[k];
            if(valid(nx,ny)&&visited[nx][ny]==0&&board[nx][ny]=='O')
            {
                dfs(board,nx,ny,visited);
            }
        }
    }
    void solve(vector<vector<char>>& board) {
        n=board.size();
        m=board[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            if(board[i][0]=='O'&&visited[i][0]==0)
            {
                dfs(board,i,0,visited);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(board[i][m-1]=='O'&&visited[i][m-1]==0)
            {
                dfs(board,i,m-1,visited);
            }
        }
        for(int i=0;i<m;i++)
        {
            if(board[0][i]=='O'&&visited[0][i]==0)
            {
                dfs(board,0,i,visited);
            }
        }
        for(int i=0;i<m;i++)
        {
            if(board[n-1][i]=='O'&&visited[n-1][i]==0)
            {
                dfs(board,n-1,i,visited);
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]=='O'&&visited[i][j]==0)
                {
                    board[i][j]='X';
                }
            }
            cout<<endl;
        }
    }
};