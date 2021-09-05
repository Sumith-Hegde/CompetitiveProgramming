// add 2 numbers given in linked list form (leetcode)
// Link to the problem - https://leetcode.com/problems/add-two-numbers/
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
//Linked List
// TimeComplexity = O(n)
// SpaceComplexity = O(1)
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* sum=new ListNode();
        ListNode* t1=l1;
        ListNode* t2=l2;
        ListNode* t3=sum;
        int carry=0;
        // while(t1!=NULL&&t2!=NULL)
        // {
        //     int a=t1->val;
        //     int b=t2->val;
        //     ListNode *neww=new ListNode((a+b+carry)%10);
        //     if(a+b+carry>9)
        //     {
        //         carry=1;
        //     }
        //     else
        //     {
        //         carry=0;
        //     }
        //     t3->next=neww;
        //     t1=t1->next;
        //     t2=t2->next;
        //     t3=t3->next;
        // }
        // while(t1!=NULL)
        // {
        //     ListNode *neww=new ListNode((t1->val+carry)%10);
        //     if(t1->val+carry>9)
        //     {
        //         carry=1;
        //     }
        //     else
        //     {
        //         carry=0;
        //     }
        //     t3->next=neww;
        //     t3=t3->next;
        //     t1=t1->next;
        // }
        // while(t2!=NULL)
        // {
        //     ListNode *neww=new ListNode((t2->val+carry)%10);
        //     if(t2->val+carry>9)
        //     {
        //         carry=1;
        //     }
        //     else
        //     {
        //         carry=0;
        //     }
        //     t3->next=neww;
        //     t3=t3->next;
        //     t2=t2->next;
        // }
        // if(carry==1)
        // {
        //     ListNode *neww=new ListNode(1);
        //     t3->next=neww;
        // }
        
        //clean -
        while(t1!=NULL||t2!=NULL||carry)
        {
            int sum=0;
            if(t1!=NULL)
            {
                sum+=t1->val;
                t1=t1->next;
            }
            if(t2!=NULL)
            {
                sum+=t2->val;
                t2=t2->next;
            }
            sum+=carry;
            carry=sum/10;
            sum=sum%10;
            ListNode* neww=new ListNode(sum);
            t3->next=neww;
            t3=t3->next;
        }
        return sum->next;
    }
};