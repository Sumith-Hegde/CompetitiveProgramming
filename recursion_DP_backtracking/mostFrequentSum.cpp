// most frequent sum (leetcode)
// Link to the problem - https://leetcode.com/problems/most-frequent-subtree-sum/
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
    private :
    unordered_map<int,int> m;
    int maxi=0;
public:
    int dfs(TreeNode* node)
    {
        if(node==NULL)  return 0;
        int sum=node->val;
        sum+=dfs(node->left);
        sum+=dfs(node->right);
        m[sum]++;
        maxi=max(maxi,m[sum]);
        return sum;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        dfs(root);
        vector<int> ans;
        for(auto i:m)
        {
            if(i.second==maxi)
            {
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};