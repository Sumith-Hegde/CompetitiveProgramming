// rotate list (leetcode)
// Link to the problem - link_to_the_problem
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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||head->next==NULL) return head;
        ListNode* t=head;
        int n=1;
        //count nodes and make the list circular
        while(t->next!=NULL)
        {
            t=t->next;
            n++;
        }
        t->next=head;

        //because after evry n rotations , list becomes same as input
        k=k%n;
        int i=0;
        t=head;
        //go till where you want to break the circular loop to make it rotated
        while(i<n-k-1)
        {
            t=t->next;
            i++;
        }
        head=t->next;
        t->next=NULL;
        return head;
    }
};