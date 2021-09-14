#include <bits/stdc++.h>
using namespace std;
int main(){
    long long T,A,B,N,b;
    cin>>T;
    while(T--){
        cin>>A>>B>>N;
        long long x[N];
        for(long long&a:x) cin>>a;
        for(long long&a:x){
            cin>>b;
            B-=(b+A-1)/A*a;
        }
        long long m=0;
        for(long long&a:x) m=max(m,a);
        cout<<((B+m>0)?"YES\n":"NO\n");
    }
}