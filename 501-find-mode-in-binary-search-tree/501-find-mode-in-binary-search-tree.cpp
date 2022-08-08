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
    private:
         unordered_map<int,int> mpp;
         int fre=0;
    public:
   
    void inorder(TreeNode* root)
    {
        if(!root)
            return;
        inorder(root->left);
        mpp[root->val]++;
        fre=max(fre,mpp[root->val]);
        inorder(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> ans;
        inorder(root);
        for(auto it:mpp)
        {
            if(it.second==fre)
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};