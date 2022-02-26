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
    ListNode* reverse(ListNode *root)
    {
        ListNode * p=root;
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *l3;
        ListNode *temp=NULL;
        int c=0;
        while(l1 && l2)
        {
            l3=new ListNode(l1->val+l2->val);
            if(c)
            {
                l3->val+=c;
                c=0;
            }
            c=(l3->val)/10;
            l3->val=(l3->val)%10;
            l3->next=temp;
            temp=l3;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1)
        {
            l3=new ListNode(l1->val);
            if(c)
            {
                l3->val=l3->val+c;
                c=0;
            }
            c=(l3->val)/10;
            l3->val=(l3->val)%10;
            l3->next=temp;
            temp=l3;
            l1=l1->next;
        }
        while(l2)
        {
            l3=new ListNode(l2->val);
            if(c)
            {
                l3->val=l3->val+c;
                c=0;
            }
            c=(l3->val)/10;
            l3->val=(l3->val)%10;
            l3->next=temp;
            temp=l3;
            l2=l2->next;
        }
        while(c)
        {
            l3=new ListNode(c);
            l3->next=temp;
            temp=l3;
            c=c/10;
        }
        return reverse(l3);
    }
};