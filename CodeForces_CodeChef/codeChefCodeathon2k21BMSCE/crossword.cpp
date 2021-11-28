#include <bits/stdc++.h>
using namespace std;
int n,m;
bool valid(int i,int j)
{
    if(i<0||j<0||i>=m||j>=n) return false;
    return true;
}
void left(int i,int j,string word,vector<vector<char>> &g)
{
    int s=0;
    int len=0;
    int p=i;
    int q=j;
    while(valid(i,j)&&word[s]==g[i][j])
    {
        len++;
        j=j-1;
        s++;
    }
    if(len==word.size())
    {
        cout<<p<<" "<<q<<endl;
    }
}
void right(int i,int j,string word,vector<vector<char>> &g)
{
    int s=0;
    int len=0;
    int p=i;
    int q=j;
    while(valid(i,j)&&word[s]==g[i][j])
    {
        len++;
        j=j+1;
        s++;
    }
    if(len==word.size())
    {
        cout<<p<<" "<<q<<endl;
    }
}
void up(int i,int j,string word,vector<vector<char>> &g)
{
    int s=0;
    int len=0;
    int p=i;
    int q=j;
    while(valid(i,j)&&word[s]==g[i][j])
    {
        len++;
        i=i-1;
        s++;
    }
    if(len==word.size())
    {
        cout<<p<<" "<<q<<endl;
    }
}
void down(int i,int j,string word,vector<vector<char>> &g)
{
    int s=0;
    int len=0;
    int p=i;
    int q=j;
    while(valid(i,j)&&word[s]==g[i][j])
    {
        len++;
        i=i+1;
        s++;
    }
    if(len==word.size())
    {
        cout<<p<<" "<<q<<endl;
    }
}
void upLeft(int i,int j,string word,vector<vector<char>> &g)
{
    int s=0;
    int len=0;
    int p=i;
    int q=j;
    while(valid(i,j)&&word[s]==g[i][j])
    {
        len++;
        i=i-1;
        j=j-1;
        s++;
    }
    if(len==word.size())
    {
        cout<<p<<" "<<q<<endl;
    }
}
void upRight(int i,int j,string word,vector<vector<char>> &g)
{
    int s=0;
    int len=0;
    int p=i;
    int q=j;
    while(valid(i,j)&&word[s]==g[i][j])
    {
        len++;
        i=i-1;
        j=j+1;
        s++;
    }
    if(len==word.size())
    {
        cout<<p<<" "<<q<<endl;
    }
}
void downLeft(int i,int j,string word,vector<vector<char>> &g)
{
    int s=0;
    int len=0;
    int p=i;
    int q=j;
    while(valid(i,j)&&word[s]==g[i][j])
    {
        len++;
        i=i+1;
        j=j-1;
        s++;
    }
    if(len==word.size())
    {
        cout<<p<<" "<<q<<endl;
    }
}
void downRight(int i,int j,string word,vector<vector<char>> &g)
{
    int s=0;
    int len=0;
    int p=i;
    int q=j;
    while(valid(i,j)&&word[s]==g[i][j])
    {
        len++;
        i=i+1;
        j=j+1;
        s++;
    }
    if(len==word.size())
    {
        cout<<p<<" "<<q<<endl;
    }
}
void dfs(int i,int j,int k,string &word,vector<vector<char>> &g)
{
    switch(k)
    {
        case 0: left(i,j,word,g);
        break;
        case 1: right(i,j,word,g);
        break;
        case 2: up(i,j,word,g);
        break;
        case 3: down(i,j,word,g);
        break;
        case 4: upLeft(i,j,word,g);
        break;
        case 5: upRight(i,j,word,g);
        break;
        case 6: downLeft(i,j,word,g);
        break;
        case 7: downRight(i,j,word,g);
        break;
    }
}
int main()
{
    string word;
    cin>>m>>n;
    vector<vector<char>> g(m,vector<char>(n));
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>g[i][j];
        }
    } 
    cin>>word;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(g[i][j]==word[0])
            {
                for(int k=0;k<8;k++)
                {
                    dfs(i,j,k,word,g);
                }
            }
        }
    }
}