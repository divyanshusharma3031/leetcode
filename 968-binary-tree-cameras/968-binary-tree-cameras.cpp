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
    int res=0;
    int minreq(TreeNode *root)
    {
       if(root==NULL)
       {
           return -1;
       }
       int left=minreq(root->left);
       int right=minreq(root->right);
       if(left==-1 && right==-1)
       {
           return 0;
       }
       if(left==0 || right==0)
       {
           res++;
           return 2;
       }
       if(left==2 || right==2)
       {
           return -1;
       }
        return 1;
    }
    int minCameraCover(TreeNode* root) {
        if(root->left==NULL && root->right==NULL)
        {
            return 1;
        }
        int x=minreq(root);
        if(x==0)
        {
            return res+1;
        }
        return res;
    }
};