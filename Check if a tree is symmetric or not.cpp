//Check if two trees are identical or not

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
    bool fun(TreeNode *ta ,TreeNode *tb)
    {
        bool result=true;
        if(ta==NULL and tb==NULL)
            return true;
        if((ta!=NULL and tb==NULL) or (ta==NULL and tb!=NULL))
            return false;
        if(ta->val == tb->val)
        {
            result = (result and fun(ta->left,tb->right));
            result = (result and fun(ta->right,tb->left));
        }
        else
            result=false;
        return result;
    }
    bool isSymmetric(TreeNode* root) {
         TreeNode *ta,*tb;
        ta=root->left;
        tb=root->right;
        return fun(ta,tb);
    }
};
