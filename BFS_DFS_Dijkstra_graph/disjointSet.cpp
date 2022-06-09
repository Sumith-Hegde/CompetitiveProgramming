#include<bits/stdc++.h>
using namespace std;
#define M 1e7
class disJointSet
{
    private:
        vector<int> rank;
        vector<int> parent;
    public:
        int findParent(int);
        void makeUnion(int,int);
        disJointSet()
        {
            
        }
        disJointSet(int n)
        {
            rank.resize(n+1,0);
            parent.resize(n+1);
            for(int i=0;i<n;i++)
            {
                parent[i]=i;
            }
        }
};
int disJointSet::findParent(int node)
{
    if(parent[node]==node)
    {
        return node;
    }
    return parent[node]=findParent(parent[node]);
}
void disJointSet::makeUnion(int u,int v)
{
    if(rank[u]<rank[v])
    {
        parent[u]=v;
    }
    else if(rank[v]<rank[u])
    {
        parent[v]=u;
    }
    else
    {
        parent[u]=v;
        rank[v]++;
    }
}
bool comp(vector<int> &a,vector<int> &b)
{
    return a[2]<b[2];
}
int findMinSpanTree(vector<vector<int>> &edges,int n)
{
    disJointSet d(n);
    sort(edges.begin(),edges.end(),comp);
    int minSpanWeight=0;
    int count=0;
    for(auto i:edges)
    {
        if(count==n-1)
        {
            break;
        }
        
        if(d.findParent(i[0])!=d.findParent(i[1]))
        {
            minSpanWeight+=i[2];
            count++;
            d.makeUnion(i[0],i[1]);
        }
    }
    return minSpanWeight;
}
int main()
{
    int n=5;
    vector<vector<int>> edges(n,vector<int>(3));
    edges[0]={0,1,5};
    edges[1]={0,2,4};
    edges[2]={2,1,1};
    edges[3]={2,3,10};
    edges[4]={0,3,2};
    // cout<<"hello"<<endl;
    cout<<findMinSpanTree(edges,4)<<endl;
    return 0;
}