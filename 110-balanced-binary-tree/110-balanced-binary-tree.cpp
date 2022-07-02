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
    bool b=true;
    int height(TreeNode *root)
    {
        if(!root)
        {
            return 0;
        }
        int l=1+height(root->left);
        int r=1+height(root->right);
        return max(l,r);
    }
    void balanced(TreeNode* root)
    {
        if(!root)
        {
            return;
        }
        int l=height(root->left);
        int r=height(root->right);
        if(abs(l-r)>1)
        {
            b=false;
            return;
        }
        balanced(root->left);
        balanced(root->right);
    }
    bool isBalanced(TreeNode* root) {
        balanced(root);
        return b;
    }
};