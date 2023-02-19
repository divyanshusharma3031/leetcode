class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode *> q;
        q.push(root);
        vector<vector<int>> ans;
        if(!root)
        {
            return ans;
        }
        int it=0;
        while(!q.empty())
        {
            int n=q.size();
            vector<int> v(n,0);
            for(int i=0;i<n;i++)
            {
                TreeNode* x=q.front();
                q.pop();
                if(!it)
                {
                    v[i]=x->val;
                }
                else
                {
                    v[n-i-1]=x->val;
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
            ans.push_back(v);
            it=!it;
        }
        return ans;
    }
};