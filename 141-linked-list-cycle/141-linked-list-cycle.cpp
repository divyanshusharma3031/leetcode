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
    bool hasCycle(ListNode *head) {
        if(!head)
        {
            return false;
        }
        Node *slow=head;
        Node *fast=head;
        do
        {
            
            slow=slow->next;
            fast=fast->next;
            if(fast==NULL)
            {
                return false;
            }
            fast=fast->next;
            if(fast==NULL)
            {
                return false;
            }
        }while(slow!=fast);
        return true;
    }
};