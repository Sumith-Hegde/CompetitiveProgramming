#include <bits/stdc++.h>
using namespace std;
 int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,m;
		cin >> n >> m;
		vector<int> ans;
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				ans.push_back(max(i, n-i-1) + max(j, m-j-1));
		sort(ans.begin(), ans.end());
		for(int i:ans)
			cout << i <<" ";
		cout<<endl;
	}
}