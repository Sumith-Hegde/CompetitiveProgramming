// archer can do 2 operations
// -> kill all animals of a certain type(type denoted by number)
// -> kill max of k animals(of any type)
// given an array A of animals(A[i] denotes type of animal) and 'k' output min number of operations req to kill all of them
// example -
// A =[1,2,1,1,3,1,1,3,3,4]
// k=2
// min number of operations = 4
// explanation -
// - kill all 1s
// - from remaining 5 kill 2 in two operations(using second) and remaining 1 on last chance
// - total 1+2+1=4

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    //greedy
    //TimeComplexity = O(n)
    //SpaceComplexity = O(n)
    //find freq of each number and if greater than given 'k' use first operation else use second
    //i.e if freq greater than k use 1 move and kill all of that kind 
    //then kill all the remaining(after first operation is checked for all values) using operation2 which takes (remaining/k)+1 moves
    while(t--)
    {
        int n,a;
        map<int,int> m;
        int moves=0;
        vector<int> k;
        cin>>n;
        cin>>a;
        for(int i=0;i<n;i++)
        {
            int x=0;
            cin>>x;
            k.push_back(x);
            m[x]++;
        }
        int total=0;
        for(auto i:m)
        {
            if(i.second>=a)
            {
                moves++;
                i.second=0;
            }
            else
            {
                total+=i.second;
            }
        }
        if(total%a==0)
        {
            moves+=total/a;
        }
        else
        {
            moves+=total/a+1;
        }
        cout<<moves<<endl;
    }
}