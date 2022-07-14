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
    ListNode *swapPairs(ListNode* head,int k)
    {
        ListNode *p=head;
        if(!p)
        {
            return NULL;
        }
        int rem=0;
        Node *temp=p;
        while(temp)
        {
            rem++;
            temp=temp->next;
        }
        if(rem<k)
        {
            return p;
        }
        int c=k;
        Node *q=NULL;
        Node *r=NULL;
        while(p && c)
        {
            r=q;
            q=p;
            p=p->next;
            q->next=r;
            c--;
        }
        head->next=swapPairs(p,k);
        return q;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        return swapPairs(head,k);
    }
};