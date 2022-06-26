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
    ListNode *reverseingroups(ListNode *head,int k)
    {
        if(head==NULL)
        {
            return NULL;
        }
        ListNode *p=head;
        ListNode *q=NULL;
        ListNode *r=NULL;
        int temp=k;
        while(p &&(k))
        {
            r=q;
            q=p;
            p=p->next;
            q->next=r;
            k--;
        }
        head->next=reverseingroups(p,2);
        return q;
    }
    ListNode* swapPairs(ListNode* head) {
        return head=reverseingroups(head,2);
    }
};