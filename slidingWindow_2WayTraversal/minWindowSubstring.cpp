// minimum window substring (leetcode)
// Link to the problem - https://leetcode.com/problems/minimum-window-substring/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string minWindow(string s, string t) {
        //first submission
        // string ans="";
        // if(t.size()>s.size()) return ans;
        // map<char,int> m;
        // map<char,int> fix;
        // int minLen=INT32_MAX;
        // int count=0;
        //'fix' map is req to keep exact count 
        // for(auto i : t)
        // {
        //     if(m.find(i)==m.end())
        //     {
        //         count++;
        //     }
        //     m[i]++;
        //     fix[i]++;
        // }
        // int l=0;
        // int r=0;
        // while(r<s.size())
        // {
        //     //do -- only if the character is present already in map
        //     if(m.find(s[r])!=m.end())
        //     {
        //         m[s[r]]--;
        //         //0 => character is found req number of times
        //         //so reduce count
        //         if(m[s[r]]==0)
        //         {
        //             count--;
        //         }
        //         //count==0 => all characters found req number of times
        //         if(count==0)
        //         {
        //             //store min string
        //             if(r-l+1<minLen)
        //             {
        //                 minLen=r-l+1;
        //                 ans=s.substr(l,minLen);
        //             }
        //             while(count==0&&l<=r)
        //             {
        //                 if(r-l+1<minLen)
        //                 {
        //                     minLen=r-l+1;
        //                     ans=s.substr(l,minLen);
        //                 }
        //                 //re add the count while moving left pointer
        //                 if(m.find(s[l])!=m.end()&&m[s[l]]<fix[s[l]])
        //                 {
        //                     m[s[l]]++;
        //                     if(m[s[l]]==1)
        //                     {
        //                         count++;
        //                     }
        //                 }
        //                 l++;
        //             }
        //         }
        //     }
        //     r++;
        // }
        // return ans;
        
        
        //cleaner code
        //instead of using 2 maps we can keep count of total characters in second string
        int l=0,r=0,start=-1,minLen=INT32_MAX,count=0;
        map<char,int> m;
        for(auto i:t)
        {
            m[i]++;
        }
        count=t.size();
        while(r<s.size())
        {
            //this will be true only if s[r] is present in t/map
            if(m[s[r]]>0)
            {
                count--;
            }
            m[s[r]]--;
            while(count==0)
            {
                if(r-l+1<minLen)
                {
                    start=l;
                    minLen=r-l+1;
                }
                m[s[l]]++;
                //this will be true only if s[r] is present in t/map
                if(m[s[l]]>0)
                {
                    count++;
                }
                l++;
            }
            r++;
        }
        if(start==-1) return "";
        return s.substr(start,minLen);
    }
};