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
    int sum(TreeNode* root,int p,int gp)
    {
        if(root==NULL)
        {
            return 0;
        }
        if(gp%2==0)
        {
            return root->val+sum(root->left,root->val,p)+sum(root->right,root->val,p);
        }
        return sum(root->left,root->val,p)+sum(root->right,root->val,p);
    }
    int sumEvenGrandparent(TreeNode* root) {
        int gp=-1;
        int level=0;
        int p=-1;
        return sum(root,p,gp);
    }
};