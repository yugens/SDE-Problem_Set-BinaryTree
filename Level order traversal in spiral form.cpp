//Level order traversal in spiral form 

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
        int rev = 0;
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
            if(rev == 1)
                reverse(temp.begin(),temp.end());
            ans.push_back(temp);
            if(rev == 0) rev = 1;
            else rev = 0;
        }
        
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        fun(root);
        return ans; 
    }
};
