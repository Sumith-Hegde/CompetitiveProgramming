// cheapest flight within k stops (leetcode)
// Link to the problem - link_to_the_problem
#include <bits/stdc++.h>
using namespace std;
//dijkstra like approach not working
// class Solution {
// public:
//     int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
//         priority_queue<pair<pair<int,int>,int>,vector<pair<pair<int,int>,int>>,greater<pair<pair<int,int>,int>>> pq;
//         vector<int> visited(n,0);
//         vector<int> cst(n,INT32_MAX);
//         vector<pair<int,int>> adj[n];
//         if(src==dst) return 0;
//         for(auto i:flights)
//         {
//             adj[i[0]].push_back({i[1],i[2]});
//             // adj[i[1]].push_back({i[0],i[2]});
//             // cout<<i[0]<<endl;
//         }
//         pq.push({{-1,0},src});
//         visited[0]=1;
//         while(!pq.empty())
//         {
//             auto cur=pq.top();
//             pq.pop();
//             int node=cur.second;
//             int stops=cur.first.first;
//             int cost=cur.first.second;
//             if(stops>k) continue;
//             if(node==dst&&stops<=k)
//             {
//                 // cout<<stops
//                 return cst[node];
//             }
//             for(auto i:adj[node])
//             {
//                 if(stops+1<=k)
//                 {
//                     cst[i.first]=min(cst[i.first],cost+i.second);
//                 }
//                 if(visited[i.first]==0)
//                 {
//                     pq.push({{stops+1,cst[i.first]},i.first});
//                     // visited[i.first]=1;
//                 }
//             }
//         }
//         return -1;
//     }
// };
class Solution {
public:
    //Bellman Ford Algorithm
    //since only k stops
    //repeat the algo k times instead of n-1
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<int> dist(n, INT_MAX);
        dist[src] = 0;
        vector<int> temp;
        for(int i = 0; i<=k; i++){
            temp = dist;
            for(auto edge : flights){
                int from = edge[0];
                int to = edge[1];
                int price = edge[2];
                if(dist[from] == INT_MAX)
                    continue;
                if(temp[to] > dist[from] + price)
                    temp[to] = dist[from] + price;
            }
            dist = temp;
        }
        return dist[dst] == INT_MAX ? -1 : dist[dst];
    }
};