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
        vector<long long> d(n);
        long long minCost=0;
        long long maxi=INT64_MIN;
        for(int i=0;i<n;i++)
        {
            cin>>d[i];
        }  
        //sort is required to get minimum cost     
        sort(d.begin(),d.end());
        //prefix sum is used get sum of all differences till that index
        //add all edges to graphs with weights equal to sum of negative of these differences
        //to maintain the given least distances from first vertex,
        //a positive edge from first vertex to vertex with highest least distance shiuld be added 
        long long prefixSum=0;
        for(int i=0;i<n;i++)
        {
            minCost+=-1*(abs(prefixSum-(i*d[i])));
            prefixSum+=d[i];
        }
        cout<<minCost+d[n-1]<<endl;
    }
}