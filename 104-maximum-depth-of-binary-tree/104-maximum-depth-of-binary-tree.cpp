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
    int height(Node *root)
    {
        if(!root)
        {
            return 0;
        }
        return max(1+height(root->left),1+height(root->right));
    }
    int maxDepth(TreeNode* root) {
        return height(root);        
    }
};