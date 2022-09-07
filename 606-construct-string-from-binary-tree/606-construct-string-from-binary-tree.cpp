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
    string tree2str(TreeNode* root) 
    {
        if(root==NULL)
        {return "";}
        
        string sl=tree2str(root->left);
        string sr=tree2str(root->right);
        if(sr=="" && sl=="")
        {
            
        }
        else if(sr!="")
        {
            sl="(" + sl + ")";
            sr="(" + sr + ")"; 
        }
        else
        {
            sl="(" + sl + ")";
        }
    
        string val=to_string(root->val);
        string ans=val+sl+sr;
        
        return ans;
    }
};