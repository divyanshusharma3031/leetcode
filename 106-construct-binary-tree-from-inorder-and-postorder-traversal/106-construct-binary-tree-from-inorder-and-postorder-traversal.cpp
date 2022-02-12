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
    unordered_map<int,int> mpp; 
    TreeNode * build(vector<int> inorder,vector<int> postorder,int pos,int poe,int INstart,int Inend)
    {
        if(INstart>Inend || pos>poe)
        {
            return NULL;
        }
        TreeNode * node=new TreeNode(postorder[poe]);
        // cout<<node->val<<"\n";
        if(INstart==Inend)
        {
            return node;
        }
        int idx=(mpp.find(postorder[poe]))->second;
        node->left=build(inorder,postorder,pos,pos+idx-INstart-1,INstart,idx-1);
        node->right=build(inorder,postorder,pos+idx-INstart,poe-1,idx+1,Inend);
        return node;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=inorder.size();
        for(int i=0;i<n;i++)
        {
            mpp[inorder[i]]=i;
        }
        return build(inorder,postorder,0,n-1,0,n-1);
    }
};