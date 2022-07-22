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
    ListNode* partition(ListNode* head, int k) {
        vector<int> v1;
        vector<int> v2;
        Node *x=head;
        while(x)
        {
            if((x->val)<k)
            {
                v1.push_back(x->val);
            }
            else
            {
                v2.push_back(x->val);
            }
            x=x->next;
        }
        x=head;
        int i=0;
        while(i<v1.size())
        {
            x->val=v1[i];
            i++;
            x=x->next;
        }
        i=0;
        while(i<v2.size())
        {
            x->val=v2[i];
            i++;
            x=x->next;
        }
        return head;
        
    }
};