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
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *t=head;
        while(t!=NULL)
        {
            ListNode *p=t->next;
            while(p && t->val==p->val)
            {
                p=p->next;
            }
            t->next=p;
            t=t->next;
        }
        return head;
    }
};