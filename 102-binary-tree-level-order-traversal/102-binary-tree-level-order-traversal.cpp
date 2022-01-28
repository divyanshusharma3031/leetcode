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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode *> q;
        TreeNode *p=root;
        vector<vector<int>> matrix;
        if(root==NULL)
        {
            return matrix;
        }
        q.push(root);
        q.push(NULL);
        vector<int> ans;
        while(!q.empty())
        {
            TreeNode *x=q.front();
            q.pop();
            if(!x)
            {
                matrix.push_back(ans);
                ans.clear();
                if(!q.empty())
                {
                    q.push(NULL);
                }
            }
            else
            {
                ans.push_back(x->val);
            }
            if( x&& x->left)
            {
                q.push(x->left);
            }
            if(x && x->right)
            {
                q.push(x->right);
            }
        }
        return matrix;
    }
};