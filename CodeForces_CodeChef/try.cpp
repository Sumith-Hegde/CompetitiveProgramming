#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a={34,34,45,45,56,56};
    int count=0;
    for(int i=0;i<a.size();i++)
    {
        if(i==a.size()-1||a[i]!=a[i+1])
        {
            count++;
        }
    }
    cout<<count+"hi"<<endl;
    return 0;
}