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
    ListNode *removehead(Node *head)
    {
        if(!head || !(head->next))
        {
            return head;
        }
        Node *p=head;
        if(p->val==p->next->val)
        {
            Node *x=p->next;
            int val=p->val;
            while(x &&x->val==val)
            {
                x=x->next;
            }
            return removehead(x);
        }
        return head;
    }
    Node *removeothers(Node *head)
    {
        if(!head || !(head->next))
        {
            return head;
        }
        Node *p=head;
        if(p->val==p->next->val)
        {
            Node *x=p->next;
            int val=p->val;
            while(x &&x->val==val)
            {
                x=x->next;
            }
            return removeothers(x);
        }
        return head;
    }
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        head=removehead(head);
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        Node *prev=head;
        Node *p=head->next;
        while(p)
        {
            Node *x=removeothers(p);
            prev->next=x;
            prev=x;
            if(x)
                p=x->next;
            else
            {
                p=NULL;
            }
        }
        return head;
    }
};