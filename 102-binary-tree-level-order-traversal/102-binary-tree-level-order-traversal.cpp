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
    typedef TreeNode Node;
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> matrix;
        if(!root)
        {
            return matrix;
        }
        queue<Node *> q;
        q.push(root);
        q.push(NULL);
        vector<int> v;
        while(!q.empty())
        {
            Node *t=q.front();
            q.pop();
            if(!t)
            {
                 matrix.push_back(v);
                 v.clear();
                if(q.empty())
                {
                   
                }
                else
                {
                    q.push(NULL);
                }
            }
            else
            {
                v.push_back(t->val);
                if(t->left)
                {
                    q.push(t->left);
                }
                if(t->right)
                {
                    q.push(t->right);
                }
                
            }
        }
        return matrix;
    }
};