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
    int count(Node *head)
    {
        int c=0;
        while(head)
        {
            c++;
            head=head->next;
        }
        return c;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        int c=count(head);
        if(c==1)
        {
            return head;
        }
        if(k>(c/2))
        {
            k=c-k+1;
        }
        int tfs=k-1;
        Node *prev=NULL;
        Node *curr=head;
        while(tfs--)
        {
            prev=curr;
            curr=curr->next;
        }
        Node *cn=curr->next;
        int tfe=c-k;
        Node *prev2=NULL;
        Node *curr2=head;
        while(tfe--)
        {
            prev2=curr2;
            curr2=curr2->next;
        }
        Node *cn2=curr2->next;
        if(prev==NULL)
        {
            if(c==2)
            {
                curr->next=NULL;
                curr2->next=curr;
                return curr2;
            }
            curr2->next=cn;
            prev2->next=curr;
            curr->next=NULL;
            head=curr2;
            return head;
        }
        if(prev2==curr)
        {
            prev->next=curr2;
            curr2->next=curr;
            curr->next=cn2;
            return head;
        }
        prev->next=curr2;
        curr2->next=cn;
        prev2->next=curr;
        curr->next=cn2;
        return head;
    }
};