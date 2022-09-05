/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void preorder(Node *root,vector<int> &ans)
    {
        if(!root)
        {
            return;
        }
        ans.push_back(root->val);
        for(auto x:root->children)
        {
            preorder(x,ans);
        }
        return;
    }
    vector<int> preorder(Node* root) {
        vector<int> ans;
        if(!root)
        {
            return ans;
        }
        stack<Node *> s;
        s.push(root);
        while(!s.empty())
        {
            Node *x=s.top();
            s.pop();
            ans.push_back(x->val);
            for(int i=(x->children).size()-1;i>=0;i--)
            {
                if(x->children[i]!=NULL)
                    s.push(x->children[i]);
            }
        }
        return ans;
    }
};