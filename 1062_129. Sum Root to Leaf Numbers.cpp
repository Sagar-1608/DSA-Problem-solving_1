// 129. Sum Root to Leaf Numbers

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
int total;
//by using recursion

   void solve(TreeNode* root ,int sum)
   {
       if(root==NULL) return ;

       sum =sum*10+root->val;
        
       if(root->left ==NULL && root->right ==NULL)
       {
           total = total+sum;
           return;
       }
       solve(root->right,sum);
       solve(root->left,sum);



   }
    int sumNumbers(TreeNode* root) {
        total =0;
       solve(root,0);
       return total;
        
    }
};
