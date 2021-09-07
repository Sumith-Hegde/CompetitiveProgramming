// swap all adjacent nodes of linked list (leetcode)
// Link to the problem - https://leetcode.com/problems/swap-nodes-in-pairs/
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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* curr = head;
        ListNode* temp = head->next;
        ListNode* prev;
        head = temp;
        while(true){
            temp = curr->next;
            prev = temp->next;
            temp->next = curr;
            if(prev == NULL || prev->next == NULL){
                curr->next = prev;
                break;
            }
            curr->next = prev->next;
            curr = prev;
        }
        return head;
    }
};