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
    ListNode *middle(ListNode *head)
    {
        ListNode *slow=head;
        ListNode *fast=head;
        ListNode *prev=head;
        while(fast && fast->next)
        {
            prev=slow;
            slow=slow->next;
            fast=fast->next;
            fast=fast->next;
        }
        return prev;//middle;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        if(!head || head->next==NULL)
        {
            if(!head)
            {
                return NULL;
            }
            TreeNode *w=new TreeNode(head->val);
            return w;
        }
        ListNode *p=middle(head);
        ListNode *q=p->next;
        p->next=NULL;
        TreeNode *root=new TreeNode(q->val);
        root->left=sortedListToBST(head);
        root->right=sortedListToBST(q->next);
        return root;
    }
};