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
    unordered_map<int,int> mpp;
    int search(int target)
    {
        return mpp[target];
    }
    TreeNode *build(vector<int> &preorder,vector<int> &inorder,int i,int j,int size)
    {
        if(i>j)
        {
            return NULL;
        }
        if(i>x)
        {
            return NULL;
        }
        int idx=search(preorder[x]);
        TreeNode *node=new TreeNode(preorder[x]);
        x++;
        if(i==j)
        {
            return node;
        }
        node->left=build(preorder,inorder,i,idx-1,size);
        node->right=build(preorder,inorder,idx+1,j,size);
        return node;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int i=0;
        int j=preorder.size()-1;
        for(int i=0;i<inorder.size();i++)
        {
            mpp[inorder[i]]=i;
        }
        return build(preorder,inorder,i,j,j);
    }
};