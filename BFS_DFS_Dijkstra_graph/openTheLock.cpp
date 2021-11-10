// open the lock (leetcode)
// Link to the problem - https://leetcode.com/problems/open-the-lock/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    //BFS
    //"0000" is start node
    //every possible next step is found by incrementing and decrementing each index
    //push into queue only if not dead and and not previously visited
    //return length of shortest path
    int openLock(vector<string>& deadends, string target) {
        unordered_map<string,int> m;
        for(auto i:deadends)
        {
            m[i]=1;
        }
        string code="0000";
        if(m[code]) return -1;
        queue<string> q;
        int levels=0;
        q.push(code);
        unordered_map<string,int> visited;
        while(!q.empty())
        {
            int s=q.size();
            while(s--)
            {
                string cur=q.front();
                q.pop();
                if(cur==target) return levels;
                for(int i=0;i<4;i++)
                {
                    string temp1=cur;
                    string temp2=cur;
                    if(temp1[i]>'0') temp1[i]--;
                    else if(temp1[i]=='0') temp1[i]='9';
                    if(temp2[i]<'9') temp2[i]++;
                    else if(temp2[i]=='9') temp2[i]='0';
                    if(m[temp1]==0&&visited[temp1]==0)
                    {
                        q.push(temp1);
                        visited[temp1]=1;
                    }
                    if(m[temp2]==0&&visited[temp2]==0)
                    {
                        q.push(temp2);
                        visited[temp2]=1;
                    }
                }
            }
            levels++;
        }
        return -1;
    }
};