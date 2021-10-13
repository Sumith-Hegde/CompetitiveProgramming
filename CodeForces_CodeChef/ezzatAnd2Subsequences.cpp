#include<bits/stdc++.h>
using namespace std;
//in the array seperate the max element and all other elements
//that will give max of sum of averages
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		int n=0;
		cin>>n;
		double sum=0;
        int a,b=INT32_MIN;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			b = max(a,b);
			sum+=a;
		}
		printf("%.9lf\n",b+(double)(sum-b)/(n-1));
	} 
}