/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    bool ans=false;
    bool isvalid(ListNode *head,TreeNode *root)
    {
        if(!head)
        {
            return true;
        }
        if(!root)
        {
            return false;
        }
        if(root->val!=head->val)
        {
            return false;
        }
        return isvalid(head->next,root->left)||isvalid(head->next,root->right);
    }
    void issubPath(ListNode* head, TreeNode* root) {
 
        if(!root)
        {
            return ;
        }
        if((root->val)==(head->val))
        {
           ans=ans || isvalid(head->next,root->left) || isvalid(head->next,root->right);
        }
        issubPath(head,root->left);
        issubPath(head,root->right);
    }
    bool isSubPath(ListNode *head,TreeNode *root)
    {
        issubPath(head,root);
        return ans;
    }
};