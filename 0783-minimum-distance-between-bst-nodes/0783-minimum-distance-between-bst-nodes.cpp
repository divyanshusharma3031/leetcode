class Solution {
public:
    vector<int> v;
    void inorder(TreeNode *root)
    {
        if(!root)
        {
            return;
        }
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    int minDiffInBST(TreeNode* root) {
        inorder(root);
        int diff=INT_MAX;
        for(int i=0;i<v.size()-1;i++)
        {
            diff=min(diff,v[i+1]-v[i]);
        }
        return diff;
    }
};