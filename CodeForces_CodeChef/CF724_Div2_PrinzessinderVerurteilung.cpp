#include<bits/stdc++.h>
using namespace std;
int main () 
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
        // start with min string i.e 'a'
		string ss = "a";
		while(1)
		{
			int d = s.find(ss);
            //if current string is not present then that is the answer
			if(d==-1)
				break;
			int mx = ss.size();
			ss[mx-1]++;
            //else use brute force and check all strings starting from length 1 in lexicographic order
            //whenever that string is not present that will be answer
            //since condition was that n<=100,we can use this approach cause length won't go beyond 3 letters
			for (int i=mx-1;i>0;i--)
			{
				if(ss[i]>'z')
				{
					ss[i] = 'a';
					ss[i-1]++;
				}
			}
			if(ss[0]>'z')
			{
				ss[0] = 'a';
				ss = "a"+ss;
			}
		}
		cout<<ss<<endl;
	}
	
}