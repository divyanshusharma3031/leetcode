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
bool compare(const pair<int,int> p1,const pair<int,int> p2)
{
    if(p1.first==p2.first)
    {
        return p1.second<p2.second;
    }
    return p1.first<p2.first;
}
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> matrix;
        if(root==NULL)
        {
            return matrix;
        }
        // vector<pair<int,int>> arr;
        map<int,vector<pair<int,int>>> mpp;
        queue<pair<TreeNode *,int>> q;
        q.push({root,0});
        q.push({NULL,-123});
        int i=0;
        while(!q.empty())
        {
            TreeNode* p=q.front().first;
            int x=q.front().second;
            q.pop();
            if(p)
            {mpp[x].push_back({i,p->val});}
            if(!p)
            {
                if(!q.empty())
                {
                    q.push({NULL,-124});
                    i++;
                }
                continue;
            }
            if(p->left)
            {
                q.push({p->left,x-1});
            }
            if(p->right)
            {
                q.push({p->right,x+1});
            }
        }
        for(auto i=mpp.begin();i!=mpp.end();i++)
        {
            int n=(i->second).size();
        
            vector<int> arr;
            vector<pair<int,int>> x=i->second;
            sort(x.begin(),x.end(),compare);
            for(int j=0;j<n;j++)
            {
                arr.push_back(x[j].second);
            }
            matrix.push_back(arr);
        }
        return matrix;
    }
};