// number of islands (leetcode)
// Link to the problem - https://leetcode.com/problems/number-of-islands/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
//normal DFS to find number of components
    void dfs(int p,vector<int> &visited,vector<int> &dx,vector<int> &dy,int n,int m,vector<vector<char>> &grid)
    {
        int x=p/m;
        int y=p%m;
        for(int i=0;i<4;i++)
        {
            int nx=x+dx[i];
            int ny=y+dy[i];
            int q=nx*m+ny;
            if(nx>=0&&nx<n&&ny>=0&&ny<m&&grid[nx][ny]=='1'&&visited[q]==0)
            {
                visited[q]=1;
                dfs(q,visited,dx,dy,n,m,grid);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        vector<int> dx={0,1,0,-1};
        vector<int> dy={1,0,-1,0};
        int n=grid.size();
        int m=grid[0].size();
        int islands=0;
        vector<int> visited(n*m,0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int current=i*m+j;
                if(visited[current]==0&&grid[i][j]=='1')
                {
                    visited[current]=1;
                    // cout<<current<<endl;
                    dfs(current,visited,dx,dy,n,m,grid);
                    islands++;
                }
            }
        }
        return islands;
    }
};