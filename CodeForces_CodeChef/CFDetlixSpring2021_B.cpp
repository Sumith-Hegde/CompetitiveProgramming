#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T; cin>>T;
	while(T--)
	{
		int n; cin>>n;
		for(int i=1;i<=n;i++)
		{
			int x;
			cin>>x;
		}
		cout<<3*n<<endl;
		for(int i=1; i<=n; i+=2)
			for(int j=1;j<=3;j++)
				cout<<2<<' '<<i<<' '<<i+1<<endl<<1<<' '<<i<<' '<<i+1<<endl;
	}
    return 0;
}