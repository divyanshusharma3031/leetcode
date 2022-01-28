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
    vector<int> rightSideView(TreeNode* root) {
        if(root==NULL)
        {
            return {};
        }
        TreeNode *temp=NULL;
        queue<TreeNode *> q;
        q.push(root);
        q.push(NULL);
        vector<int> ans;
        while(!q.empty())
        {
            TreeNode *x=q.front();
            q.pop();
            if(!x)
            {
                ans.push_back(temp->val);
                if(!q.empty())
                {
                    q.push(NULL);
                }
            }
            // if(x)
            // {
            //     // q.push(x);
            // }
            if(x && x->left)
            {
                q.push(x->left);
            }
            if(x && x->right)
            {
                q.push(x->right);
            }
            if(x)
            {
                temp=x;
            }
        }
        return ans;
    }
};