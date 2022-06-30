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
    void path(Node *root,int target,vector<vector<int>> &matrix,int s,vector<int> v)
    {
        if(!root)
        {
            return;
        }
        if(root->left==NULL && root->right==NULL)
        {
            s+=root->val;
            v.push_back(root->val);
            if(s==target && v.size()!=0)
            {
                matrix.push_back(v);
            }
            v.pop_back();
            return;
        }
        v.push_back(root->val);
        path(root->left,target,matrix,s+root->val,v);
        v.pop_back();
        v.push_back(root->val);
        path(root->right,target,matrix,s+root->val,v);
        v.pop_back();
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> matrix;
        vector<int> v;
        int s=0;
        path(root,targetSum,matrix,s,v);
        return matrix;
    }
};