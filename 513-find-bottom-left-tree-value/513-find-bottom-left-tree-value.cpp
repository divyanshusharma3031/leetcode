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
    int findBottomLeftValue(TreeNode* root) {
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
                if(!q.empty())
                {
                    q.push(NULL);
                    v.clear();
                }
                continue;
            }
            v.push_back(t->val);
            if(t && t->left)
            {
                q.push(t->left);
            }
            if(t && t->right)
            {
                q.push(t->right);
            }
        }
        return *v.begin();
    }
};