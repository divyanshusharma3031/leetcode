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
    int mn=1e9;
    void height(Node *root,int h)
    {
        if(!root)
        {
            return ;
        }
        if(!(root->left) && !(root->right))
        {
            mn=min(mn,h);
            return ;
        }
        height(root->left,h+1);
        height(root->right,h+1);
    }
    int minDepth(TreeNode* root) {
        if(!root)
        {
            return 0;
        }
        height(root,0);
        return mn+1;
    }
};