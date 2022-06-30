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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
      
        vector<vector<int>> matrix;
        if(!root)
        {
            return matrix;
        }
        vector<int> v;
        bool b=true;
        
        queue<Node *> q;
        
        q.push(root);
        
        q.push(NULL);
        
        while(!q.empty())
        {
            Node *t=q.front();
            q.pop();
            if(!t)
            {
                matrix.push_back(v);
                v.clear();
                if(!q.empty())
                {
                    q.push(NULL);
                }
                else
                {
                    
                }
            }
            if(t)
            {
                v.push_back(t->val);
            }
            if(t && t->left)
            {
                q.push(t->left);
            }
            if(t && t->right)
            {
                q.push(t->right);
            }
        }
        for(int i=0;i<matrix.size();i++)
        {
            if(i%2)
            {
                reverse(matrix[i].begin(),matrix[i].end());
            }
        }
        return matrix;
    }
};