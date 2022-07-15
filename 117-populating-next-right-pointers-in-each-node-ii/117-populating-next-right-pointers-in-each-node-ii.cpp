/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        vector<Node*> v;
        if(!root)
        {
            return root;
        }
        queue<Node*> q;
        q.push(root);
        q.push(NULL);
        while(!q.empty())
        {
            Node *t=q.front();
            q.pop();
            if(!t)
            {
                for(int i=0;i<v.size()-1;i++)
                {
                    v[i]->next=v[i+1];
                }
                v[v.size()-1]=NULL;
                v.clear();
                if(!q.empty())
                {
                    q.push(NULL);
                }
                continue;
            }
            v.push_back(t);
            if(t->left)
            {
                q.push(t->left);
            }
            if(t->right)
            {
                q.push(t->right);
            }
        }
        return root;
    }
};