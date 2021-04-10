//Diameter of Binary Tree 

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
    int res=INT_MIN;
    int fun(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        int l=fun(root->left);
        int r=fun(root->right);
        int temp = max(l,r)+1;
        int ans=max(temp,l+r+1);
        res=max(res,ans);
        return temp;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        
        fun(root);
        return res-1;
    }
};
