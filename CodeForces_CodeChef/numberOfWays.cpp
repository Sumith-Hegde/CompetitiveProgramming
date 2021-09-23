#include <bits/stdc++.h>
using namespace std;
//recursive solution - (gives TLE)
// int ways(int s,int target,int part,vector<int> &a)
// {
//     // if(part==3)
//     // {
//     //     if(s<a.size())
//     //     {
//     //         return 1;
//     //     }
//     //     return 0;
//     // }
//     if(part>3&&s>=a.size()) return 1;
//     if(part>3) return 0;
//     if(s>a.size()) return 0;
//     int count=0;
//     int k=target;
//     for(int i=s;i<a.size();i++)
//     {
//         k-=a[i];
//         if(k==0)
//         {
//             count+=ways(i+1,target,part+1,a);
//         }
//     }
//     return count;
// }
int main()
{
    int n=0;
    cin>>n;
    vector<int> a(n);
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%3!=0)
    {
        cout<<0<<endl;
    }
    else
    {
        //recursive -
        // cout<<ways(0,sum/3,1,a);
 
        //iterative solution -
        //whenever you get prefixSum i.e sum2 == totalSum/3 increase count
        //whenever you get prefixSum i.e sum2 == 2*(totalSum/3),
        //add the count of prefixSum==totalSum/3 before this index to total count
        //this is enough because if we get 2 parts with sum=totalSum/3 then 3rd part will have the same sum
        //since any part cannot be empty , we go only till n-1 and for same reason i>0 condition must be there in first 'if-block'
        long long count=0;
        long long total=0;
        long long sum2=0;
        for(int i=0;i<n-1;i++)
        {
            sum2+=a[i];
            //same order of if conditions must be maintained because when total sum==0 totalSum/3 will be same as 2*(totalSum/3)
            if(sum2==2*(sum/3)&&i>0)
            {
                total+=count;
            }
            if(sum2==(sum/3))
            {
                count++;
            }
        }
        cout<<total<<endl;   
    }
}