#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s, t;
		cin >> s >> t;
		sort (s.begin(), s.end());
		if (t=="abc" && s[0]=='a')
			sort (lower_bound(s.begin(), s.end(), 'b'), upper_bound(s.begin(), s.end(), 'c'), greater<char>());
		
		cout << s << endl;
	}
 
	return 0;
}
