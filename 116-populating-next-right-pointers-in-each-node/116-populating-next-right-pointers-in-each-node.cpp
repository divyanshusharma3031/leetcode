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
        vector<vector<Node *>> matrix;
        queue<Node *> q;
        if(root==NULL)
        {
            return NULL;
        }
        q.push(root);
        q.push(NULL);
        vector<Node*> ans;
        while(!q.empty())
        {
            Node *x=q.front();
            q.pop();
            if(!x)
            {
                matrix.push_back(ans);
                ans.clear();
                if(!q.empty())
                {
                    q.push(NULL);
                }
            }
            else
            {
                ans.push_back(x);
            }
            if(x && x->left)
            {
                q.push(x->left);
            }
            if(x && x->right)
            {
                q.push(x->right);
            }
        }
        int n=matrix.size();
        for(int i=0;i<n;i++)
        {
            int w=matrix[i].size();
            // cout<<w<<"\n";
            for(int j=0;j<w-1;j++)
            {
                matrix[i][j]->next=matrix[i][j+1];
            }
            matrix[i][w-1]->next=NULL;
        }
        return root;
    }
};