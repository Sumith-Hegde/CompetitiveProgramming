// uniquePaths 3 (leetcode)
// Link to the problem - link_to_the_problem
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
//normal DFS
//to ensure path has every non obstacle cell keep count of it
//also make copy of grid every time dfs is called to not miss any path
    void dfs(int &count,int x,int y,vector<vector<int>> grid,int &n,int &m,int &t,int c)
    {
        if(x<0||x>=n||y<0||y>=m||grid[x][y]==-1) return;
        //c==t => all non obstacle cells covered
        if(grid[x][y]==2&&c==t)
        {
            count++;
            return;
        }
        grid[x][y]=-1;
        //c+1 to count number cells covered already
        dfs(count,x+1,y,grid,n,m,t,c+1);
        dfs(count,x-1,y,grid,n,m,t,c+1);
        dfs(count,x,y+1,grid,n,m,t,c+1);
        dfs(count,x,y-1,grid,n,m,t,c+1);
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        int count=0;
        int n=grid.size();
        int m=grid[0].size();
        int sx=0,sy=0;
        int t=m*n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    sx=i;
                    sy=j;
                }
                if(grid[i][j]==-1)
                {
                    //to get total number of non obstacle cells
                    t--;
                }
            }
        }
        dfs(count,sx,sy,grid,n,m,t,1);
        return count;
    }
};