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
    ListNode *reverse(ListNode *head)
    {
        ListNode *p=head;
        ListNode *q=NULL;
        ListNode *r=NULL;
        
        while(p)
        {
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        return q;
    }
    bool isPalindrome(ListNode* head) {
        ListNode *temp=head;
        ListNode *slow=head;
        ListNode *fast=head;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            temp=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        // cout<<temp->val<<"\n";
        // cout<<slow->val<<"\n";
        temp->next=NULL;
        slow=reverse(slow);
        while(head && slow)
        {
            if(head->val != slow->val)
            {
                return false;
            }
            head=head->next;
            slow=slow->next;
        }
        return true;
    }
};