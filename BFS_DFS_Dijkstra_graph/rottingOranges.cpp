// rotting oranges (leetcode)
// Link to the problem - link_to_the_problem
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
//normal bfs but add all rotten oranges initially to the queue
//and after one bfs if there is still a fresh orange then not possible case
    vector<int> dx={1,0,-1,0};
    vector<int> dy={0,1,0,-1};
    int maxi=INT32_MIN;
    int n=0,m=0;
    bool valid(int x,int y)
    {
        if(x<0||y<0||x>=n||y>=m)
        {
            return false;
        }
        return true;
    }
    int bfs(queue<pair<pair<int,int>,int>> &q,map<pair<int,int>,int> &visited,vector<vector<int>> &grid)
    {
        while(!q.empty())
        {
            auto current=q.front();
            q.pop();
            int x=current.first.first;
            int y=current.first.second;
            int time=current.second;
            maxi=max(time,maxi);
            for(int i=0;i<4;i++)
            {
                int nx=x+dx[i];
                int ny=y+dy[i];
                if(valid(nx,ny)&&grid[nx][ny]!=0&&visited[{nx,ny}]!=1)
                {
                    visited[{nx,ny}]=1;
                    q.push({{nx,ny},time+1});
                }
            }
        }
        return maxi;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        map<pair<int,int>,int> visited;
        queue<pair<pair<int,int>,int>> q;
        n=grid.size();
        m=grid[0].size();
        int count=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({{i,j},0});
                    visited[{i,j}]=1;
                }
                if(grid[i][j]!=0)
                {
                    count++;
                }
            }
        }
        if(count==0) return 0;
        if(q.empty()) return -1;
        int ans=bfs(q,visited,grid);
        cout<<ans<<endl;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1&&visited[{i,j}]!=1)
                {
                    return -1;
                }
            }
        }
        return ans;
    }
};