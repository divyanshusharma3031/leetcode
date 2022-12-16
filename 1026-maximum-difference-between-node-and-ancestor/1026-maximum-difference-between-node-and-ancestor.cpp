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
    int ans=0;
    void solve(TreeNode *root,int mx,int mn)
    {
        if(!root)
        {
            ans=max(ans,abs(mx-mn));
            return;
        }
        ans=max(ans,abs(mx-mn));
        solve(root->left,max(root->val,mx),min(root->val,mn));
        solve(root->right,max(root->val,mx),min(root->val,mn));
    }
    int maxAncestorDiff(TreeNode* root) {
        solve(root,root->val,root->val);
        return ans;
    }
};