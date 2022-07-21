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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if((right-left)==0)
        {
            return head;
        }
        if(left==1)
        {
            ListNode *p=head;
            ListNode *q=NULL;
            ListNode *r=NULL;
            int x=right;
            while(p && (x>0))
            {
                r=q;
                q=p;
                p=p->next;
                q->next=r;
                x--;
            }
            head->next=p;
            return q;
        }
        ListNode *p=head;
        ListNode *q=p;
        ListNode *w=p;
        int x=left-1;
        while(x-- && p)
        {
            q=p;
            p=p->next;
        }
        w=q;
        // cout<<w->val<<"\n";
        ListNode *temp=p;
        int y=right-left+1;
        ListNode *r=NULL;
        while(p && (y--))
        {
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        if(w)
        {
            w->next=q;   
        }
        if(temp)
        {
             temp->next=p;
        }
       
        return head;
        
    }
};