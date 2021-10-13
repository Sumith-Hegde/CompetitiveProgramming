// pathSum2 (leetcode)
// Link to the problem - https://leetcode.com/problems/path-sum-ii/
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
    vector<vector<int>> result;

    void findSum( TreeNode* node , vector<int>& currlist,  int currsum , int s ){

        if( node->left == NULL && node->right == NULL ){
            if( node->val + currsum == s ){
                currlist.push_back(node->val);
                result.push_back(currlist);
                currlist.pop_back();
            }
            return ;
        }

        currlist.push_back(node->val);
        if( node->left ){
            findSum( node->left , currlist, currsum+node->val , s );
        }
        if( node->right ){
            findSum( node->right , currlist ,  currsum + node->val , s );
        }
        currlist.pop_back();


        return ;

}
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if( root== NULL ){
            return result;
        }
        vector<int> currlist;
        findSum(root,currlist,0,targetSum);
        
        return result;
        
    }
};