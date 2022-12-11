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
        if(!(root->left) && !(root->right))
        {
            mx=max(mx,root->val);
            return root->val;
        }
        int left=maxsum(root->left);
        if(left<0)
        {
            left=0;
        }
        int right=maxsum(root->right);
        if(right<0)
        {
            right=0;
        }
        // cout<<root->val<<" "<<left<<" "<<right<<"\n";
        mx=max(mx,root->val + left + right);
        return root->val+max(left,right);
    }
    int maxPathSum(TreeNode* root) {
        if(!root)
        {
            return 0;
        }
        if(!(root->left) && !(root->right))
        {
            return root->val;
        }
        maxsum(root);
        return mx;
    }
};