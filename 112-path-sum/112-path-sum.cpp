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
    bool b=false;
    void possible(TreeNode *root,int s,int target)
    {
        if(!root)
        {
            return;
        }
        if(root->left==NULL && root->right==NULL)
        {
            s=s+root->val;
            if(s==target)
            {
                b=true;
            }
            s=s-root->val;
            return;
        }
        s=s+root->val;
        possible(root->left,s,target);
        possible(root->right,s,target);
        s=s-root->val;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        possible(root,0,targetSum);
        return b;
    }
};