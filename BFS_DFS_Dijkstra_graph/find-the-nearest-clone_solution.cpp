#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the findShortest function below.

/*
 * For the unweighted graph, <name>:
 *
 * 1. The number of nodes is <name>_nodes.
 * 2. The number of edges is <name>_edges.
 * 3. An edge exists between <name>_from[i] to <name>_to[i].
 *
 */
 

 //modified BFS
 // TimeComplexity = O(nodes+edges)
// SpaceComplexity = O(nodes+edges)
 void BFS(int vertex,int value,vector<int> &shortDistance,map<int,vector<int>> &adj, vector<bool> &visited,queue<int> &Q,vector<long> &ids)
 {
     int current=Q.front();
     Q.pop();
     for(auto i:adj[current])
     {
        //  if node is already visited and and its id is the required id then we check if its parent's(which will be current)
        //  id is also required id if yes we update distance of that node to 1 because 1 is the shortest distance possible
         if(visited[i]&&ids[i-1]==value)
         {
             if(ids[current-1]==value)
             {
                 shortDistance[i]=1;
             }
         }
        //  if node is not visited yet then we check if parent has req id if yes then we need to update shortest distance to the distance from
        //  this parent because that will be shorter than the previous node with req id
         if(!visited[i])
         {
             Q.push(i);
             visited[i]=true;
             if(ids[current-1]==value)
             {
                 shortDistance[i]=1;
             }
             else
             {
                 shortDistance[i]=shortDistance[current]+1;
             }
         }
     }
     if(!Q.empty())
     {
         int next=Q.front();
         BFS(next,value,shortDistance,adj,visited,Q,ids);
     }
 }
int findShortest(int graph_nodes, vector<int> graph_from, vector<int> graph_to, vector<long> ids, int val) {
    // solve here
    queue<int> Q;
    vector<int> shortDistance(graph_nodes+1,-1);
    map<int,vector<int>> adj;
    vector<bool> visited(graph_nodes+1,false);
    for(int i=0;i<graph_from.size();i++)
    {
        adj[graph_from[i]].push_back(graph_to[i]);
        adj[graph_to[i]].push_back(graph_from[i]);
    }
    for(int i=1;i<graph_nodes+1;i++)
    {
        if(ids[i-1]==val)
        {
            shortDistance[i]=0;
            Q.push(i);
            visited[i]=true;
            BFS(i,val,shortDistance,adj,visited,Q,ids);
            break;
        }
    }
    int minValue=INT16_MAX;
    bool found=false;
    for(int i=1;i<graph_nodes+1;i++)
    {
        if(ids[i-1]==val&&shortDistance[i]!=0)
        {
            minValue=min(minValue,shortDistance[i]);
            found=true;
        }
    }
    if(found)
    {
        return minValue;
    }
    return -1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int graph_nodes;
    int graph_edges;

    cin >> graph_nodes >> graph_edges;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> graph_from(graph_edges);
    vector<int> graph_to(graph_edges);

    for (int i = 0; i < graph_edges; i++) {
        cin >> graph_from[i] >> graph_to[i];
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    string ids_temp_temp;
    getline(cin, ids_temp_temp);

    vector<string> ids_temp = split_string(ids_temp_temp);

    vector<long> ids(graph_nodes);

    for (int i = 0; i < graph_nodes; i++) {
        long ids_item = stol(ids_temp[i]);

        ids[i] = ids_item;
    }

    int val;
    cin >> val;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int ans = findShortest(graph_nodes, graph_from, graph_to, ids, val);

    fout << ans << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
