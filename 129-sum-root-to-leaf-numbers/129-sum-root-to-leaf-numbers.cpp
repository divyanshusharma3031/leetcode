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
    void sumnum(TreeNode *root,map<TreeNode*,int> &mpp,long long &s,long long curr)
    {
        if(root==NULL)
        {
            return;
        }
        if(mpp[root]==1)
        {
            return;
        }
        if(root->left==NULL &&root->right==NULL)
        {s+=curr*10+root->val;}
        mpp[root]=1;
        sumnum(root->left,mpp,s,curr*10+root->val);
        sumnum(root->right,mpp,s,curr*10+root->val);
    }
    int sumNumbers(TreeNode* root) {
        map<TreeNode *,int> mpp;
        long long s=0;
        sumnum(root,mpp,s,0LL);
        return s;
    }
};