/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    typedef TreeNode Node;
    static bool compare(pair<int,int> &p1,pair<int,int> &p2)
    {
        if(p1.first==p2.first)
        {
            return p1.second<p2.second;
        }
        return p1.first<p2.first;
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        vector<vector<int>> ans;
        if(!root)
        {
            return ans;
        }
        queue<pair<Node *,pair<int,int>>> q;
        
        q.push({root,{0,0}});
        
        map<int,vector<pair<int,int>>> mpp;
        
        while(!q.empty())
        {
            Node *t=q.front().first;
            pair<int,int> p=q.front().second;
            q.pop();
            mpp[p.second].push_back({p.first,t->val});
            // cout<<p.second<<" "<<t->val<<"\n";
            if(t->left)
            {
                q.push({t->left,{p.first+1,p.second-1}});
            }
            if(t->right)
            {
                q.push({t->right,{p.first+1,p.second+1}});
            }
        }
        vector<vector<pair<int,int>>> matrix;
        for(auto it:mpp)
        {
            sort(it.second.begin(),it.second.end(),compare);
            matrix.push_back(it.second);
        }
        for(auto it:matrix)
        {
            vector<int> v;
            for(auto i:it)
            {
                v.push_back(i.second);
            }
            ans.push_back(v);
        }
        return ans;
    }
};