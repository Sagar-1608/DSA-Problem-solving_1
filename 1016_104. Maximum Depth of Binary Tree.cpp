// 104. Maximum Depth of Binary Tree
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
    int maxi(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        else{
            int ldepth= maxi(root->left);
            int rdepth= maxi(root->right);
            
            return max(ldepth, rdepth)+1;
        }

    }

    int maxDepth(TreeNode* root) {
       
        return maxi(root);
        
        
    }

};
