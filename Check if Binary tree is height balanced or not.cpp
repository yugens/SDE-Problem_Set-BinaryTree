//Check if Binary tree is height balanced or not

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
     int height(TreeNode* root){
        if(!root) 
            return 0;
        return 1+ max(height(root->left), height(root->right));
     }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return true;
        int lh=height(root->left);
        int rh=height(root->right);
        if(abs(lh-rh)<=1  and isBalanced(root->left) and isBalanced(root->right))
        {
           return true; 
        }
        return false;
    }
};
