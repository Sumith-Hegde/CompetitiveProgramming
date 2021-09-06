// You are given an integer n. In 1 move, you can do one of the following actions:

// erase any digit of the number (it's acceptable that the number before the operation has exactly one digit and after the operation, it is "empty");
// add one digit to the right.
// The actions may be performed in any order any number of times.

// Note that if, after deleting some digit from a number, it will contain leading zeroes, they will not be deleted. E.g. if you delete from the number 301 the digit 3, the result is the number 01 (not 1).

// You need to perform the minimum number of actions to make the number any power of 2 (i.e. there's an integer k (k≥0) such that the resulting number is equal to 2k). The resulting number must not have leading zeroes.

// E.g. consider n=1052. The answer is equal to 2. First, let's add to the right one digit 4 (the result will be 10524). Then let's erase the digit 5, so the result will be 1024 which is a power of 2.

// E.g. consider n=8888. The answer is equal to 3. Let's erase any of the digits 8 three times. The result will be 8 which is a power of 2.

// Input
// The first line contains one integer t (1≤t≤104) — the number of test cases. Then t test cases follow.

// Each test case consists of one line containing one integer n (1≤n≤109).

// Output
// For each test case, output in a separate line one integer m — the minimum number of moves to transform the number into any power of 2.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    vector<long long> power2;
    //store all powers of 2
    for(int i=0;i<32;i++)
    {
        power2.push_back(1<<i);
    }
    cin>>t;
    while(t--)
    {
        int n=0;
        cin>>n;
        // if n is already power of two
        if((n&(n-1))==0)
        {
            cout<<0<<endl;
        }
        else
        {
            //convert given input to string and check matches with all the stored powers of 2
            //whenever there is a difference it means that digit should be removed so increment count
            //then count remaining digits in either the power of 2 or entered number
            //they should be removed or inserted acc to which number has remaining digits
            string s1=to_string(n);
            int mini=INT32_MAX;
            int count=0;
            int a=s1.size();
            for(auto x:power2)
            {
                count=0;
                string s2=to_string(x);
                int b=s2.size();
                int i=0;
                int j=0;
                while(i<a&&j<b)
                {
                    if(s1[i]==s2[j])
                    {
                        i++;
                        j++;
                    }
                    else
                    {
                        count++;
                        i++;
                    }
                }
                if(i==a&&j!=b)
                {
                    count+=b-j;
                }
                else if(j==b&&i!=a)
                {
                    count+=a-i;
                }
                mini=min(count,mini);
            }
            cout<<mini<<endl;
        }
    }
}