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

    void Rev(vector<vector<int>> &matrix)
    {
        int l=0;
        int h=matrix.size()-1;
        while(l<=h)
        {
            swap(matrix[l],matrix[h]);
            l++;
            h--;
        }
    }
class Solution {
public:

    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> matrix;
        queue<TreeNode *> q;
        if(!root)
        {
            return matrix;
        }
        q.push(root);
        q.push(NULL);
        vector<int> v;
        while(!q.empty())
        {
            TreeNode *t=q.front();
            q.pop();
            if(!t)
            {
                matrix.push_back(v);
                v.clear();
                if(!q.empty())
                {
                    q.push(NULL);
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
        Rev(matrix);
    return matrix;
    }
    
};