#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'maxRegion' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY grid as parameter.
 */
bool valid(int x,int y,vector<vector<int>> &grid)
{
    int n=grid.size();
    int m=grid[0].size();
    if(x<0||x>n-1||y<0||y>m-1||grid[x][y]==0)
    {
        return false;
    }
    return true;
}
//normal DFS on grid
//count max number of connected nodes
// TimeComplexity = O(n*m)
// SpaceComplexity = O(n*m)
int DFS(int x,int y,vector<vector<int>> &visited,vector<vector<int>> &grid)
{
    int count=1;
    visited[x][y]=1;
    vector<pair<int,int>> neighbours;
    neighbours.push_back(make_pair(x-1, y));
    neighbours.push_back(make_pair(x-1, y-1));
    neighbours.push_back(make_pair(x-1, y+1));
    neighbours.push_back(make_pair(x, y-1));
    neighbours.push_back(make_pair(x, y+1));
    neighbours.push_back(make_pair(x+1, y+1));
    neighbours.push_back(make_pair(x+1, y));
    neighbours.push_back(make_pair(x+1, y-1));
    for(auto i : neighbours)
    {
        if(valid(i.first,i.second,grid)&&!visited[i.first][i.second])
        {
            count+=DFS(i.first,i.second,visited,grid);
        }
    }
    return count;
}
int maxRegion(vector<vector<int>> grid) {
    // queue<pair<int,int>> Q;
    int n=grid.size();
    int m=grid[0].size();
    vector<vector<int>> visited(n,vector<int>(m,0));
    vector<int> nodesInComponent;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(!visited[i][j]&&valid(i,j,grid))
            {
                nodesInComponent.push_back(DFS(i,j,visited,grid));
            }
        }
    }
    int largest=INT32_MIN;
    for(auto i:nodesInComponent)
    {
        if(i>largest)
        {
            largest=i;
        }
    }
    return largest;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string m_temp;
    getline(cin, m_temp);

    int m = stoi(ltrim(rtrim(m_temp)));

    vector<vector<int>> grid(n);

    for (int i = 0; i < n; i++) {
        grid[i].resize(m);

        string grid_row_temp_temp;
        getline(cin, grid_row_temp_temp);

        vector<string> grid_row_temp = split(rtrim(grid_row_temp_temp));

        for (int j = 0; j < m; j++) {
            int grid_row_item = stoi(grid_row_temp[j]);

            grid[i][j] = grid_row_item;
        }
    }

    int res = maxRegion(grid);

    fout << res << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
 
