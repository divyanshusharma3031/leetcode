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
    void inorder(TreeNode *root,vector<pair<TreeNode*,int>> &ans)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left,ans);
        ans.push_back(make_pair(root,root->val));
        inorder(root->right,ans);
    }
    void recoverTree(TreeNode* root) {
        vector<pair<TreeNode*,int>>ans;
        vector<int> arr;
        inorder(root,ans);
        for(int i=0;i<ans.size();i++)
        {
            arr.push_back(ans[i].second);
        }
        sort(arr.begin(),arr.end());
        int n=ans.size();
        for(int i=0;i<n;i++)
        {
            // cout<<ans[i].second<<" ";
            (ans[i].first)->val=arr[i];
        }
    }
};