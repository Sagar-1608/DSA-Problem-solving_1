// 1026. Maximum Difference Between Node and Ancestor
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int ans=0;
    pair<int,int> isMax(TreeNode * root)
    {
        
        // base case for null node 
        if(root==NULL)
        {
          pair <int,int> p = make_pair(INT_MAX,INT_MIN);
          return p;
        }
        
       pair<int,int> left = isMax(root->left);
       pair<int,int> right= isMax(root->right);

       int currMin = min({root->val,left.first,right.first});
       int currMax = max({root->val,left.second,right.second});
       ans = max ({ans,root->val-currMin,currMax-root->val});

       pair<int,int> ret;
       ret.first= currMin;
       ret.second =currMax;
     return ret;
    
    }
public:
    int maxAncestorDiff(TreeNode* root) {
      isMax(root);  
      return ans;
    }
};
