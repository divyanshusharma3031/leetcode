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
    ListNode *middle(ListNode *head)
    {
        ListNode *temp=head;
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast && fast->next)
        {
            temp=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL)
        {
            return NULL;
        }
        ListNode *mid=middle(head);
        // cout<<mid->val<<"\n";
        ListNode *p=head;
        ListNode *q=NULL;
        ListNode *r=NULL;
        while(p!=mid)
        {
            q=p;
            p=p->next;
        }
        r=p->next;
        q->next=r;
        return head;
    }
};