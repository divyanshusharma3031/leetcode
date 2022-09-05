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
    vector<vector<int>> levelOrder(Node* root) {
        if(!root)
        {
            return {};
        }
        queue<Node *> q;
        q.push(root);
        q.push(NULL);
        vector<int> v;
        vector<vector<int>> ans;
        while(!q.empty())
        {
            Node * p=q.front();
            q.pop();
            if(!p)
            {
                ans.push_back(v);
                if(!q.empty())
                {
                    q.push(NULL);
                }
                v.clear();
            }
            else
            {
                v.push_back(p->val);
                for(auto x:p->children)
                {
                    q.push(x);
                }
            }
        }
        return ans;
    }
};