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
    typedef ListNode Node;
    ListNode * reverse(ListNode* head, int k)
    {
        if(!head)
        {
            return NULL;
        }
        Node *p=head;
        int rem=0;
        while(p)
        {
            p=p->next;
            rem++;
        }
        if(rem<k)
        {
            return head;
        }
        p=head;
        Node *q=NULL;
        Node *r=NULL;
        int c=k;
        while(p && c)
        {
            r=q;
            q=p;
            p=p->next;
            q->next=r;
            c--;
        }
        head->next=reverse(p,k);
        return q;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        return reverse(head,k);
    }
};