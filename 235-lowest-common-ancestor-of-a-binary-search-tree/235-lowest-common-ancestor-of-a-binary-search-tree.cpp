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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<pair<TreeNode*,int>> path1;
        vector<pair<TreeNode*,int>> path2;
        TreeNode * x=root;
        while(x)
        {
            path1.push_back({x,x->val});
            if(x->val==p->val)
            {
                break;
            }
            if(x->val>p->val)
            {
                x=x->left;
            }
            else
            {
                x=x->right;
            }
        }
        x=root;
        while(x)
        {
            path2.push_back({x,x->val});
            if(x->val==q->val)
            {
                break;
            }
            if(x->val>q->val)
            {
                x=x->left;
            }
            else
            {
                x=x->right;
            }
        }
        int i=0;
        int j=0;
        // for(int a=0;a<path1.size();a++)
        // {
        //     cout<<path1[a].second<<" ";
        // }
        // cout<<"\n";
        // for(int a=0;a<path2.size();a++)
        // {
        //     cout<<path2[a].second<<" ";
        // }
        while(i<path1.size() && j<path2.size() && path1[i].second==path2[j].second)
        {
            i++;
            j++;
        }
        // cout<<i<<" "<<path2.size();
        // cout<<j<<'\n';
        if(i==path1.size())
        {
            return path1[i-1].first;
        }
        if(j==path2.size())
        {
            return path2[j-1].first;
        }
        return path1[i-1].first;
    }
};