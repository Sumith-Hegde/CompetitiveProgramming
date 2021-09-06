// same tree (leetcode)
// Link to the problem - https://leetcode.com/problems/same-tree/
#include <bits/stdc++.h>
using namespace std;

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

class Solution {
public:
    //TLE
    // string inorder(TreeNode *p,string &str)
    // {
    //     if(p==NULL)
    //     {
    //         return "";
    //     }
    //     str+=inorder(p->left,str);
    //     str+=to_string(p->val);
    //     str+=inorder(p->right,str);
    //     return str;
    // }
    // string postorder(TreeNode *p,string &str)
    // {
    //     if(p==NULL)
    //     {
    //         return "";
    //     }
    //     str+=postorder(p->left,str);
    //     str+=postorder(p->right,str);
    //     str+=to_string(p->val);
    //     return str;
    // }
    // bool isSameTree(TreeNode* p, TreeNode* q) {
    //     string inorder1="";
    //     string inorder2="";
    //     string postorder1="";
    //     string postorder2="";
    //     inorder1=inorder(p,inorder1);
    //     inorder2=inorder(q,inorder2);
    //     postorder1=postorder(p,postorder1);
    //     postorder2=postorder(q,postorder2);
    //     if(inorder1==inorder2&&postorder2==postorder1)
    //     {
    //         return true;
    //     }
    //     return false;
    // }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL&&q==NULL) return true;
        if(p==NULL||q==NULL) return false;
        if(p->val!=q->val) return false;
        return isSameTree(p->left,q->left)&&isSameTree(p->right,q->right);
        }
};