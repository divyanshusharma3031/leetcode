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
    int solve(TreeNode *root,unordered_map<int,int> &mpp)
    {
        if(!root)
        {
            return 0;
        }
        if(root->left==NULL && root->right==NULL)
        {
            mpp[root->val]++;
            int odd=0;
            for(auto it:mpp)
            {
                if(it.second%2)
                {
                    odd++;
                    if(odd>1)
                    {
                        mpp[root->val]--;
                        return 0;
                    }
                }
            }
            mpp[root->val]--;
            return 1;
        }
        
        mpp[root->val]++;
        int c1=solve(root->left,mpp);
        int c2=solve(root->right,mpp);
        mpp[root->val]--;
        if(mpp[root->val]==0)
        {
            mpp.erase(root->val);
        }
        return c1+c2;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        unordered_map<int,int> mpp;
        return solve(root,mpp);
    }
};