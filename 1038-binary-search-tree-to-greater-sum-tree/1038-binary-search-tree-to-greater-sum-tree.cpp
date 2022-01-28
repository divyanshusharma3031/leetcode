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
    void preorder(TreeNode *p,vector<int> &ans)
    {
        if(!p)
        {
            return;
        }
        
        preorder(p->left,ans);
        ans.push_back(p->val);
        preorder(p->right,ans);
    }
    void setsum(TreeNode **root,unordered_map<int,int> mpp)
    {
        TreeNode *p=*root;
        
        if(!p)
        {
            return;
        }
        TreeNode *left=(*(root))->left;
        TreeNode *right=(*(root))->right;
        p->val=mpp[p->val];
        setsum(&left,mpp);
        setsum(&right,mpp);
    }
    TreeNode* bstToGst(TreeNode* root) {
        vector<int> ans;
        if(root==NULL)
        {
            return NULL;
        }
        preorder(root,ans);
        int n=ans.size();
        vector<int> arr;
        for(int i=0;i<n;i++)
        {
            arr.push_back(ans[i]);
        }
        for(int i=n-2;i>=0;i--)
        {
            arr[i]=arr[i+1]+arr[i];
        }
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++)
        {
            mpp[ans[i]]=arr[i];
        }
        setsum(&root,mpp);
        return root;
    }
};