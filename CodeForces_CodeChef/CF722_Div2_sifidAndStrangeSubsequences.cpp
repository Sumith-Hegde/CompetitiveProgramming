// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t=0;
//     cin>>t;
//     while(t--)
//     {
//         int n=0;
//         cin>>n;
//         vector<int> a(n);
//         int count=0;
//         int count0=0;
//         for(int i=0;i<n;i++)
//         {
//             cin>>a[i];
//             if(a[i]<=0)
//             {
//                 count++;
//             }
//             if(a[i]==0)
//             {
//                 count0++;
//             }
//         }
//         if(count==a.size())
//         {
//             cout<<count<<endl;
//         }
//         else if(count0>=2)
//         {
//             cout<<count<<endl;
//         }
//         else
//         {
//             cout<<count+1<<endl;
//         }
//     }
// }
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int t; cin>>t; while(t-->0){
		int n; cin>>n; int a[n]; 
		for(int i=0;i<n;i++) cin>>a[i];
		int p=n-1; 
		sort(a,a+n);
		for(int i=0;i<p;i++){
			if(a[i+1]-a[i] < a[p]){
				p--; i--;
			}
		}
		cout << p+1 << endl;
	}
}