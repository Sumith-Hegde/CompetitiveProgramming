// LinkedList cycle (leetcode)
// Link to the problem - https://leetcode.com/problems/linked-list-cycle/
#include<iostream>
using namespace std;
struct ListNode {
     int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL) return false;
        ListNode* slower=head;
        ListNode* faster=head;
        //slow fast pointers
        // TimeComplexity = O(n)
        // SpaceComplexity = O(1)
        //floyd's algorithm - move one fast another slow eventually they'll meet if there is a cycle
        //to find the start of the cycle , once slow and fast pointers meet send one of them to the start of the
        //list and keep the other at the meeting point then move both by one node untill they meet
        //when they meet for second time that will be start of the cycle (to remove cycle we can go only till 
        //next of the to pointers meet and then make the next of the node that started at the meeting point in 
        //second round to null)
        while(faster!=NULL&&faster->next!=NULL)
        {
            slower=slower->next;
            faster=faster->next->next;
            if(faster==slower)
            {
                return true;
            }
        }
        return false;
    }
};