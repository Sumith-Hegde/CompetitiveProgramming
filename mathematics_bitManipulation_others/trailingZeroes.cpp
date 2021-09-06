//given an integer n (1<=n<=10^9)
//find number of trailing zeroes in n!
#include<iostream>
using namespace std;
int findTrailingZeroes(int n)
{
    int a=5;
    int trailingZeroes=0;
    //n! has power of 2>power of 5
    //therfore number of trailing zeroes = power of 5 in n!(because 2x5=10)
    while((n/a)>0)
    {
        trailingZeroes+=(n/a);
        //beacause all powers of five will have more than one 5 as factor
        a=a*5;
    }
    return trailingZeroes;
}
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<"number of trailing zeroes in "<<n<<"! = "<<findTrailingZeroes(n);
    return 0;
}