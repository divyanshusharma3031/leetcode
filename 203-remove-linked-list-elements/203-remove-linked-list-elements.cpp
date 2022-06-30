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
    ListNode* removeElements(ListNode* head, int val) {
        if(!head)
        {
            return NULL;
        }
        if(head->val==val)
        {
            while(head && head->val==val)
            {
                head=head->next;
            }
        }
        Node *prev=NULL;
        Node *p=head;
        while(p)
        {
            if(p->val==val)
            {
                prev->next=p->next;
            }
            else
            {
                prev=p;
                
            }
            p=p->next;

        }
        return head;
    }
};