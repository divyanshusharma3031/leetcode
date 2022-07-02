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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(!root){
            return ans;
        }
        queue<Node*> q;
        q.push(root);
        q.push(NULL);
        Node *prev=NULL;
        Node *t=NULL;
        while(!q.empty())
        {
            prev=t;
            t=q.front();
            q.pop();
            if(!t)
            {
                ans.push_back(prev->val);
                if(!q.empty())
                {
                    q.push(NULL);
                }
                continue;
            }
            if(t->left)
            {
                q.push(t->left);
            }
            if(t->right)
            {
                q.push(t->right);
            }
        }
        return ans;
    }
};