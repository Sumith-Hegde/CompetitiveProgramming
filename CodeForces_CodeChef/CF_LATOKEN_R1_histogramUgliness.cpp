#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int>a(n+2);
		for(int i=1;i<=n;i++)
		cin>>a[i];
		long long sum=0;
		for(int i=1;i<=n+1;i++)
		{
			sum+=abs(a[i-1]-a[i]);
		}
		for(int i=1;i<=n;i++)
		{
			if(a[i]>a[i-1]&&a[i]>a[i+1])
			{
				sum -=a[i]-max(a[i+1],a[i-1]);
			}
		}
		cout<<sum<<endl;
	}
}