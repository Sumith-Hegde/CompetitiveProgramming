#include<bits/stdc++.h>
using namespace std;
int n,r,s,t,a[1005];
int main()
{
    cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=1;i<=n;i++)cin>>a[i];
		for(s=0;;s++)
		{
			r=0;
			for(int i=0;i<n;i++)r+=a[i]>a[i+1];
			if(!r)break;
			for(int i=s%2+1;i<n;i+=2)
			{
				if(a[i]>a[i+1])swap(a[i],a[i+1]);
			}
		}
		cout<<s<<endl;
	}
}