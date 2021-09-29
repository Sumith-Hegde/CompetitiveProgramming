
#include<bits/stdc++.h>
using namespace std;
int main(){
	//since all characters other than those in stolen string occur twixe
	//we just xor all the character of all strings
	//then the remaining will be the stolen string
	//because swaps are done at the same index as they were earlier in both sets
	long long t;
	cin >>t;
	while(t--){
        string s;
		int n, m;
		cin >>n >>m;
        vector<char> a(m,'\0');
		for(int i = 1; i <= 2 * n - 1; i++){
			cin >>s;
			for(int j = 0; j < m; j++){
				a[j] ^= s[j];
			}
		}
        for(int i=0;i<m;i++)
        {
            cout<<a[i];
        }
        cout<<endl;
	}
}