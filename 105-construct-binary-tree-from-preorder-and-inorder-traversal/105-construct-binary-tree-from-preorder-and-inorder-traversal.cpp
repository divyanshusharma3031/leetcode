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
    int search(vector<int> inorder,int target)
    {
        for(int i=0;i<inorder.size();i++)
        {
            if(inorder[i]==target)
            {
                return i;
            }
        }
        return -1;
    }
    TreeNode * build(vector<int> &preorder,vector<int> &inorder,int start,int end,int size)
    {
        // cout<<preorder[x]<<"\n";
        // cout<<x<<"\n";
        if(start>end)
        {
            return NULL;
        }
        if(x>size)
        {
            return NULL;
        }
        int idx=search(inorder,preorder[x]);
        TreeNode *node=new TreeNode(preorder[x]);
        x++;
        if(start==end)
        {
            return node;
        }
        node->left=build(preorder,inorder,start,idx-1,size);
        node->right=build(preorder,inorder,idx+1,end,size);
        return node;
        
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=preorder.size();
        // TreeNode * root=new TreeNode(preoorder[x]);
        return build(preorder,inorder,0,n-1,n-1);
    }
};