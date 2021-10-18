#include <bits/stdc++.h>
using namespace std;
int solveLDE(int a,int b,int &x,int &y)
{
    if(b==0)
    {
        x=1;
        y=0;
        return ;
    }
    int x1,y1;
    int g=solveLDE(b,a%b,x1,y1);
    x=y1;
    y=x1-y1*(a/b);
    return g;
}
int main()
{
    return 0;
}
