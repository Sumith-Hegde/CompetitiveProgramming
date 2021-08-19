// invertt binary tree (leetcode)
// Link to the problem - https://leetcode.com/problems/invert-binary-tree/
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
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return NULL;
        if(root->left==NULL&&root->right==NULL) return root;
        TreeNode* L=invertTree(root->left);
        TreeNode* R=invertTree(root->right);
        root->left=R;
        root->right=L;
        return root;
    }
};