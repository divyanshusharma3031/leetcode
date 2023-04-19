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
    int mx=0;
    void solve(TreeNode *root,int prev,int count)
    {
        if(!root)
        {
            return;
        }
        mx=max(mx,count);
        if(prev==-1)
        {
            solve(root->right,1,count+1);
            solve(root->left,0,count+1);
        }
        else if(prev==1)
        {
            //pichla move right tha
            solve(root->left,0,count+1);
            solve(root->right,-1,0);
            solve(root->right,1,1);
        }
        else
        {
            solve(root->right,1,count+1);
            solve(root->left,-1,0);
            solve(root->left,0,1);
        }
    }
    int longestZigZag(TreeNode* root) {
        solve(root,-1,0);
        return mx;
    }
};