// remove nth node from right in linked list (leetcode)
// Link to the problem - https://leetcode.com/problems/remove-nth-node-from-end-of-list/
#include <bits/stdc++.h>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
class Solution {
public:
//keep 2 pointers to before-head move only one of them untill 'n' number of times later move both together
//when the right pointer reaches null left->next will be the node to remove
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* beforeHead=new ListNode();
        beforeHead->next=head;
        ListNode* temp1=beforeHead;
        ListNode* temp2=beforeHead;
        int i=0;
        if(head==NULL) return head;
        if(head->next==NULL&&n==1) return NULL;
        while(temp2->next!=NULL)
        {
            if(i<n)
            {
                temp2=temp2->next;
                i++;
            }
            else
            {
                temp1=temp1->next;
                temp2=temp2->next;
            }
        }
        // ListNode* temp3=temp1->next;
        if(temp1==beforeHead) return head->next;
        temp1->next=temp1->next->next;
        return head;
    }
};