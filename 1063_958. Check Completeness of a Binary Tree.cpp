

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

//code added
class Solution {
int totalNode(TreeNode* root)
{
    //base
    if(root==NULL)
    {
        return 0;
    }
    return 1+ totalNode(root->left) + totalNode(root->right);
}

bool solve(TreeNode* root, int index , int totalNode)
{

    // thhis approach use dfs 
    if(root==NULL) return true;

    if(index > totalNode )
    {
        return false;
    }
    return solve(root->left, index*2 ,totalNode) &&solve(root->right, index*2+1 ,totalNode);



}
public:
    bool isCompleteTree(TreeNode* root) {

        int totalnode = totalNode(root);
        int index=1;
        return solve(root,index,totalnode);


        
    }
};
