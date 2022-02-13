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
    int x=0;
    TreeNode *build(vector<int> preorder,int bound)
    {
        if(x==preorder.size() || preorder[x]>bound)
        {
            return NULL;
        }
        TreeNode *root=new TreeNode(preorder[x]);
        x++;
        root->left=build(preorder,root->val);
        root->right=build(preorder,bound);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode *root=build(preorder,INT_MAX);
        // cout<<root<<"\n";
        return root;
    }
};