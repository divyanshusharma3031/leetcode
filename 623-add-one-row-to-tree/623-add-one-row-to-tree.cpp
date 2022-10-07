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
    void add(Node *&root,int val,int curr,int depth)
    {
        if(!root)
        {
            return;
        }
        if(depth==curr)
        {
            Node *left=new Node(val);
            Node *right=new Node(val);
            Node *l=root->left;
            Node *r=root->right;
            root->left=left;
            root->right=right;
            left->left=l;
            right->right=r;
        }
        add(root->left,val,curr+1,depth);
        add(root->right,val,curr+1,depth);
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1)
        {
            Node *newroot=new Node(val);
            newroot->left=root;
            return newroot;
        }
        add(root,val,1,depth-1);
        return root;
    }
};