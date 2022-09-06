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
    bool prune(TreeNode *(&root))
    {
        if(!root)
        {
            return true;
        }
        if(root->left==NULL && root->right==NULL)
        {
            return root->val==0;
        }
        bool b1=prune(root->left);
        bool b2=prune(root->right);
        if(b1 && b2)
        {
            root->left=NULL;
            root->right=NULL;
            return root->val==0;
        }
        if(b1)
        {
            root->left=NULL;
            return false;
        }
        else if(b2)
        {
            root->right=NULL;
            return false;
        }
        return false;
    }
    TreeNode* pruneTree(TreeNode* root) {
        prune(root);
        if(root && root->left==NULL && root->right==NULL && root->val==0)
        {
            return NULL;
        }
        return root;
    }
};