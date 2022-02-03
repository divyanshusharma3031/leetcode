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
    const int m=1e9+7;
    long long total=0;
    map<TreeNode*,int> mpp;
    long long sum(TreeNode * root)
    {
        if(root==NULL)
        {
            return 0;
        }
        if(mpp[root]!=0)
        {
            return mpp[root];
        }
        long long ls=sum(root->left);
        long long rs=sum(root->right);
        return mpp[root]=ls+rs+root->val;
    }
    void product(TreeNode *root,long long &mx)
    {
        if(root==NULL)
        {
            return;
        }
        long long sub=root->val+sum(root->left)+sum(root->right);
        mx=max(mx,sub*(total-sub));
        product(root->left,mx);
        product(root->right,mx);
    }
    int maxProduct(TreeNode* root) {
        long long mx=-1;
        long long p=0;
        total=sum(root);
        
        // cout<<total<<"\n";
        product(root,mx);
        mx=mx%m;
        cout<<mx<<"\n";
        return mx;
    }
};