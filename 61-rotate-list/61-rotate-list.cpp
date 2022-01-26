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
    int count(ListNode * p)
    {
        int c=0;
        while(p)
        {
            c++;
            p=p->next;
        }
        return c;
    }
    ListNode *reverse(ListNode * p)
    {
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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)
        {
            return NULL;
        }
        int c=count(head);
        k=k%c;
        int a=c-k;
        ListNode *p=head;
        ListNode *q=NULL;
        ListNode *r=NULL;
        while(a)
        {
            r=q;
            q=p;
            p=p->next;
            q->next=r;
            a--;
        }
        ListNode *ajax=head;
        head=q;
        a=k;
        ListNode *x=p;
        ListNode *y=NULL;
        ListNode *z=NULL;
        while(x)
        {
            z=y;
            y=x;
            x=x->next;
            y->next=z;
            a--;
        }
        ajax->next=y;
        head=reverse(head);
        return head;
    }
};