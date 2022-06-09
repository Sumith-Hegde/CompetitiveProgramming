// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// bool valid(int i,int j,int n,int m)
// {
//     if(i<0||j<0||i>=n||j>=m)
//     {
//         return false;
//     }
//     return true;
// }
// int main() {
//     // ios_base::sync_with_stdio(false);
// 	// your code goes here
// 	int t=0;
// 	cin>>t;
// 	while(t--)
// 	{
// 	    int n=0,m=0,x=0,y=0;
// 	   // cin>>n>>m>>x>>y;
// 	   scanf("%d %d %d %d",&n,&m,&x,&y);
// 	    vector<vector<int>> v(n,vector<int>(m,INT32_MAX));
// 	    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
// 	    pq.push({0,{0,0}});
// 	    vector<int> dx={0,1,0,-1,1,-1,1,-1};
// 	    vector<int> dy={1,0,-1,0,1,-1,-1,1};
// 	    while(!pq.empty())
// 	    {
// 	        auto cur=pq.top();
// 	        int x1=cur.second.first;
// 	        int y1=cur.second.second;
// 	        int k=cur.first;
//             pq.pop();
// 	        for(int i=0;i<4;i++)
// 	        {
// 	            int nx=x1+dx[i];
// 	            int ny=y1+dy[i];
// 	            if(valid(nx,ny,n,m)&&k+x<v[nx][ny])
// 	            {
// 	                v[nx][ny]=k+x;
// 	                pq.push({k+x,{nx,ny}});
// 	            }
// 	        }
// 	        for(int i=4;i<8;i++)
// 	        {
// 	            int nx=x1+dx[i];
// 	            int ny=y1+dy[i];
// 	            if(valid(nx,ny,n,m)&&k+y<v[nx][ny])
// 	            {
// 	                v[nx][ny]=k+y;
// 	                pq.push({k+y,{nx,ny}});
// 	            }
// 	        }
// 	    }
// 	    cout<<v[n-1][m-1]<<endl;
// 	}
// 	return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> a={50,40,30,30,30,20,10};
	int i=upper_bound(a.end(),a.begin(),30)-a.begin();
	cout<<i<<endl;
	return 0;
}