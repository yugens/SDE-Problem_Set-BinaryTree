//Postorder Traversal with recursion


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
    vector<int> ans;
    void fun(TreeNode* root)
    {
        if(root==NULL)
            return;
        fun(root->left);
        fun(root->right);
        ans.push_back(root->val);
        return;
    }
    vector<int> postorderTraversal(TreeNode* root) {
       fun(root);
        return ans;  
    }
};
