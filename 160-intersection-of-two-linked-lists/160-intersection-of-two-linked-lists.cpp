/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    typedef ListNode Node;
    int len(Node *p)
    {
        int c=0;
        while(p)
        {
            c++;
            p=p->next;
        }
        return c;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1=len(headA);
        int l2=len(headB);
        if(l1>=l2)
        {
            int c=l1-l2;
            Node *p=headA;
            while(c)
            {
                p=p->next;
                c--;
            }
            Node *q=headB;
            while(p!=q)
            {
                p=p->next;
                q=q->next;
            }
            return p;
        }
             int c=l2-l1;
            Node *p=headB;
            while(c)
            {
                p=p->next;
                c--;
            }
            Node *q=headA;
            while(p && q && p!=q)
            {
                p=p->next;
                q=q->next;
            }
            return p;
    }
};