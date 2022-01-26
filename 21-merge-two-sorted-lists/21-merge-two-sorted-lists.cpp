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
    ListNode * reverse(ListNode *p)
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *ans=NULL;
        ListNode *p=list1;
        ListNode *q=list2;
        ListNode *temp=NULL;
        while(p!=NULL && q!=NULL)
        {
            if(p->val<=q->val)
            {
               ListNode *x=new ListNode(p->val);
               ans=x;
                ans->next=temp;
                temp=ans;
                p=p->next;
            }
            else
            {
                ListNode *x=new ListNode(q->val);
               ans=x;
                ans->next=temp;
                temp=ans;   
                q=q->next;
            }
        }
        while(p)
        {
            ListNode *x=new ListNode(p->val);
               ans=x;
                ans->next=temp;
                temp=ans;
            p=p->next;
        }
        while(q)
        {
            ListNode *x=new ListNode(q->val);
               ans=x;
                ans->next=temp;
                temp=ans;
            q=q->next;
        }
        ans=reverse(ans);
        return ans;
    }
};