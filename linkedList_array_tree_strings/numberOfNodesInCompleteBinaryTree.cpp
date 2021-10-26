// number of nodes in complete binary tree (leetcode)
// Link to the problem - https://leetcode.com/problems/count-complete-tree-nodes/
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
    int leftHeight(TreeNode* node)
    {
        if(node==NULL) return 0;
        return 1+leftHeight(node->left);
    }
    int rightHeight(TreeNode* node)
    {
        if(node==NULL) return 0;
        return 1+rightHeight(node->right);
    }
    int countNodes(TreeNode* root) {
        if(root==NULL) return 0;
        int a=leftHeight(root);
        int b=rightHeight(root);
        if(a==b)
        {
            return pow(2,a)-1;
        }
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};