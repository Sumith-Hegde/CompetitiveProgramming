#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n=0,p=0;
    cin>>n;
    cin>>p;
    // vector<vector<int>> lights;
    vector<int> intervals(p+1,0);
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a;
        cin>>b;
        if(a-b>=0)
        {
            intervals[a-b]++;
        }
        else
        {
            intervals[0]++;
        }
        if(a+b+1<=p)
        {
            intervals[a+b+1]--;
        }
    }
    int maxLen=0;
    for(int i=1;i<p+1;i++)
    {
        intervals[i]+=intervals[i-1];
    }
    for(int i=0;i<p+1;i++)
    {
        int len=0;
        while(intervals[i]!=1&&i<=p)
        {
            i++;
            len++;
        }
        maxLen=max(len,maxLen);
    }
    cout<<maxLen;
    return 0;
}