// deepest level sum (leetcode)
// Link to the problem - https://leetcode.com/problems/deepest-leaves-sum/
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
    int deepSum(TreeNode* node,int level,pair<int,int> &levelSum)
    {
        if(node==NULL) return 0;
        if(level>levelSum.first)
        {
            levelSum.second=node->val;
            levelSum.first=level;
        }
        else if(level==levelSum.first)
        {
            levelSum.second+=node->val;
        }
        deepSum(node->left,level+1,levelSum);
        deepSum(node->right,level+1,levelSum);
        return levelSum.second;
    }
    int deepestLeavesSum(TreeNode* root) {
        auto i = make_pair(0,0);
        return deepSum(root,0,i);
    }
};