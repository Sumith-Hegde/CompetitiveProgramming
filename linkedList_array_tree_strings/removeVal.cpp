// remove val (leetcode)
// Link to the problem - https://leetcode.com/problems/remove-element/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int valPos=-1;
        //get first position of val in array
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==val)
            {
                valPos=i;
                break;
            }
        }
        //if you do not get position then val is not present hence return entire length
        if(valPos==-1)
        {
            return nums.size();
        }
        //from first position of val whenever the value is not equal to the given val(if equal 
        //to value then skip) 
        //make the value at the valPos to that value and move ahead
        //untill the farther pointer(the faster one) reaches the end
        for(int j=valPos+1;j<nums.size();j++)
        {
            if(nums[j]!=val)
            {
                nums[valPos++]=nums[j];
            }
        }
        return valPos;
    }
};