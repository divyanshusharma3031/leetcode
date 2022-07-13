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
    vector<double> averageOfLevels(TreeNode* root) {
        double s=0;
        int c=0;
        vector<double> ans;
        queue<Node*> q;
        q.push(root);
        q.push(NULL);
        while(!q.empty())
        {
            Node * t=q.front();
            q.pop();
            if(!t)
            {
                ans.push_back(s/c);
                s=0;
                c=0;
                if(!q.empty())
                {
                    q.push(NULL);
                }
                continue;
            }
            s+=t->val;
            c++;
            if(t && t->left)
            {
                q.push(t->left);
            }
            if(t && t->right)
            {
                q.push(t->right);
            }
        }
        return ans;
    }
};