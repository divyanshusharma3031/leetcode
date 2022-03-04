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
    int robbing(TreeNode *root,map<TreeNode*,int> &dp)
    {
        if(root==NULL)
        {
            return 0;
        }
        int c1=robbing(root->left,dp)+robbing(root->right,dp);
        
        TreeNode *left=root->left;
        
        TreeNode *right=root->right;
        
        TreeNode *l1=NULL;
        TreeNode *r1=NULL;
        TreeNode *l2=NULL;
        TreeNode *r2=NULL;
        
        if((dp[root]!=0))
        {
            return dp[root];
        }
        
        if(left)
        {
            l1=left->left;
            r1=left->right;
        }
        
        if(right)
        {
            l2=right->left;
            r2=right->right;
        }
        
        int c2=root->val+robbing(l1,dp)+robbing(r1,dp)+robbing(l2,dp)+robbing(r2,dp);
        
        return dp[root]=max(c1,c2);
        
    }
    int rob(TreeNode* root) {
        map<TreeNode*,int> mpp;
        return robbing(root,mpp);
    }
};