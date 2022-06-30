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
    int mx=INT_MIN;
    int maxsum(TreeNode *root)
    {
        if(!root)
        {
            return 0;
        }
        
        int left=maxsum(root->left);
        
        int right=maxsum(root->right);
        
        left=max(left,0);
        
        right=max(right,0);
        
        mx=max(mx,root->val+left+right);
        
        return root->val+max(left,right);
    }
    int maxPathSum(TreeNode* root) {
        maxsum(root);
        return mx;
    }
};