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
    int lcx=0;
    int rcx=0;
    int count(TreeNode*root,int x)
    {
        if(!root)
        {
            return 0;
        }
        int l=count(root->left,x);
        int r=count(root->right,x);
        if(root->val==x)
        {
            lcx=l;
            rcx=r;
        }
        return l+r+1;
    }
    bool btreeGameWinningMove(TreeNode* root, int n, int x) {
        count(root,x);
        int NodesExcluding_x=n-(lcx+rcx+1);
        int mx=max({lcx,rcx,NodesExcluding_x});
        return mx>(n/2);
    }
   
};