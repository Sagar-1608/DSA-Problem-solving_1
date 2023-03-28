// 121. Best Time to Buy and Sell Stock

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
public:

   bool cheak(TreeNode* p, TreeNode* q)
   {
       
//Base case
       
    if(p == NULL && q == NULL) return true;
    if(p == NULL || q == NULL || (p->val != q->val)) return false;
//recursion
    return cheak(p->left, q->left) && cheak(p->right, q->right);
           
      
       
       

   }
    bool isSameTree(TreeNode* p, TreeNode* q) {

        
        return cheak(p,q);
    }
};
