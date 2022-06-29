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
#define data val
class Solution {
public:
    bool b=true;
    void isSame(TreeNode *p,TreeNode *q)
    {
        if(!p&&!q)
        {
            return;
        }
        if(!p)
        {
            b=false;
            return;
        }
        if(!q)
        {
            b=false;
            return;
        }
        if(p->data!=q->data)
        {
            b=false;
            return;
        }
        isSame(p->left,q->left);
        isSame(p->right,q->right);
        return;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        isSame(p,q);
        return b;
    }
};