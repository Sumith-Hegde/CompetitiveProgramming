// LinkedList palindrome (leetcode)
// Link to the problem - https://leetcode.com/problems/palindrome-linked-list/
#include<iostream>
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
    bool checkPalindrome(ListNode* &check,ListNode* current)
    {
        if(check==NULL) return true;
        if(current->next==NULL)
        {
            int a=check->val;
            check=check->next;
            return current->val==a;
        }
        bool x=checkPalindrome(check,current->next);
        bool y=current->val==check->val;
        check=check->next;
        return x&&y;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL) return true;
        if(head->next==NULL) return true;
        ListNode* temp=head;
        return checkPalindrome(temp,temp->next);
    }
};
