#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;
//normal bfs
//TimeComplexity = O(edges+nodes)
//SpaceComplexity = O(nodes+edges)
class Graph {
    public:
        vector<bool> visited;
        vector<int> shortestDistance;
        map<int,vector<int>> adj;
        queue<int> Q;
        int n;
        Graph(int n) {
            for(int i=0;i<n;i++)
            {
                visited.push_back(false);
            }
            for(int i=0;i<n;i++)
            {
                shortestDistance.push_back(-1);
            }
            this->n=n;
        }
    
        void add_edge(int u, int v) {
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        void BFS()
        {
            int current=Q.front();
            int level=shortestDistance[current]+1;
            Q.pop();
            for(auto i: adj[current])
            {
                if(!visited[i])
                {
                    shortestDistance[i]=level;
                    Q.push(i);
                    visited[i]=true;
                }
            }
            if(!Q.empty())
            {
                BFS();
            }
        }
        vector<int> shortest_reach(int start) {
            visited[start]=true;
            Q.push(start);
            shortestDistance[start]=0;
            BFS();
            vector<int> shortest_reach;
            for(int i=0;i<n;i++)
            {
                    if(shortestDistance[i]!=-1)
                    {
                        shortest_reach.push_back(shortestDistance[i]*6);
                    }
                    else
                    {
                        shortest_reach.push_back(shortestDistance[i]);
                    }
            }
            return shortest_reach;
        }
    
};

int main() {
    int queries;
    cin >> queries;
        
    for (int t = 0; t < queries; t++) {
      
		int n, m;
        cin >> n;
        // Create a graph of size n where each edge weight is 6: 
        Graph graph(n);
        cin >> m;
        // read and set edges
        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            u--, v--;
            // add each edge to the graph
            graph.add_edge(u, v);
        }
		int startId;
        cin >> startId;
        startId--;
        // Find shortest reach from node s
        vector<int> distances = graph.shortest_reach(startId);

        for (int i = 0; i < distances.size(); i++) {
            if (i != startId) {
                cout << distances[i] << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}
