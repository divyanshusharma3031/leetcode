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
    Node *reverse(Node *l1)
    {
        Node *r=NULL;
        Node *q=NULL;
        Node *p=l1;
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
        Node *l3=NULL;
        l1=reverse(l1);
        l2=reverse(l2);
        int c=0;
        while(l1 && l2)
        {
            Node *temp=new ListNode(l1->val + l2->val);
            if(c!=0)
            {
                temp->val=temp->val+c;
                c=0;
            }
            c=(temp->val)/10;
            temp->val=(temp->val)%10;
            
            temp->next=l3;
            l3=temp;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1)
        {
            Node *temp=new Node(l1->val+c);
            c=(temp->val)/10;
            temp->val=(temp->val)%10;
            temp->next=l3;
            l3=temp;
            l1=l1->next;
        }
        while(l2)
        {
            Node *temp=new Node(l2->val+c);
            c=(temp->val)/10;
            temp->val=(temp->val)%10;
            temp->next=l3;
            l3=temp;
            l2=l2->next;
        }
        while(c!=0)
        {
            Node *temp=new Node(c);
            c=0;
            temp->next=l3;
            l3=temp;
        }
        return l3;
    }
};