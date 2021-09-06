// path sum (leetcode)
// Link to the problem - https://leetcode.com/problems/path-sum/
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
    bool isLeaf(TreeNode *a)
    {
        if(a->left==NULL&&a->right==NULL)
        {
            return true;
        }
        return false;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return false;
        if(targetSum-root->val==0&&isLeaf(root)) return true;    
        return hasPathSum(root->left,targetSum-root->val)||hasPathSum(root->right,targetSum-root->val);
        
        
    }
};