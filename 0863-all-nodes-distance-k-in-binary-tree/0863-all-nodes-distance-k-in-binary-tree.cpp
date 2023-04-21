/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> ans;
    void dfs(int node,int k,vector<int> adj[],vector<int> &vis)
    {
        if(vis[node])
        {
            return;
        }
        vis[node]=1;
        if(k==0)
        {
            ans.push_back(node);
        }
        for(auto it:adj[node])
        {
            dfs(it,k-1,adj,vis);
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int> adj[501];
        //poor aapproach by creating adjacency list
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            auto it=q.front();
            q.pop();
            if(it->left)
            {
                adj[it->val].push_back(it->left->val);
                adj[it->left->val].push_back(it->val);
                q.push(it->left);
            }
            if(it->right)
            {
                adj[it->val].push_back(it->right->val);
                adj[it->right->val].push_back(it->val);
                q.push(it->right);
            }
        }
        vector<int> vis(501,0);
        dfs(target->val,k,adj,vis);
        return ans;
    }
};