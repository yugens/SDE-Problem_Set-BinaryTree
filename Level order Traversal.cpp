//Level order Traversal (T.C.: o(n) and S.C.: o(n) )

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
    vector<vector<int>> ans;
    void fun(TreeNode* root)
    {
       if(root==NULL)
           return;
        queue<TreeNode* > Q;
        Q.push(root);
        while(!Q.empty())
        {
            int sz = Q.size();
            vector<int> temp;
            for(int i = 1 ; i <= sz ; i++){
                TreeNode* curr=Q.front();
                    temp.push_back(curr->val);
                if(curr->left!=NULL)
                    Q.push(curr->left);
                if(curr->right!=NULL)
                    Q.push(curr->right);
                Q.pop();
            }
            ans.push_back(temp);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
       fun(root);
        return ans;
    }
};
