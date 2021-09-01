// count number of sub arrays with xor = k(given number)
#include <bits/stdc++.h>
using namespace std;
int countXor(vector<int> nums,int k)
{
    int xorr=0;
    int count=0;
    map<int,int> m;
    //similar to kadane;s algorithm
    //suppose sub array has xor=a and if that has subArray with xor k, then b = xor^k
    //therfore count this 'b' gives count of number of subArrays with xor=k
    for(int i=0;i<nums.size();i++)
    {
        xorr=xorr^nums[i];
        if(xorr==k)
        {
            count++;
        }
        if(m.find(xorr^k)!=m.end())
        {
            count+=m[xorr^k];
        }
        m[xorr]+=1;
    }
    return count;
}
int main()
{
    cout<<countXor({4,2,2,6,4},6);
    return 0;
}
