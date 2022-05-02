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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        set<int> s;
        
        int n=descriptions.size();
        
        for(int i=0;i<n;i++)
        {
            s.insert(descriptions[i][0]);
        }
        
        for(int i=0;i<n;i++)
        {
            s.erase(descriptions[i][1]);
        }
        
        unordered_map<int,TreeNode*> mpp;
        
        unordered_map<int,int> vis;
        
        for(int i=0;i<n;i++)
        {
            if(vis[descriptions[i][0]]==0)
            {
                TreeNode *p=new TreeNode(descriptions[i][0]);
                mpp[descriptions[i][0]]=p;
                if((descriptions[i][2])==1)
                {
                    if(vis[descriptions[i][1]]==0)
                    {
                        TreeNode *left=new TreeNode(descriptions[i][1]);
                        p->left=left;
                        mpp[descriptions[i][1]]=left;
                    }
                    else
                    {
                        p->left=mpp[descriptions[i][1]]; 
                    }
                }
                else
                {
                    if(vis[descriptions[i][1]]==0)
                    {
                        TreeNode *right=new TreeNode(descriptions[i][1]);
                        p->right=right;
                        mpp[descriptions[i][1]]=right;
                    }
                    else
                    {
                        p->right=mpp[descriptions[i][1]];
                    }
                    
                }
                vis[descriptions[i][0]]=1;
                vis[descriptions[i][1]]=1;
            }
            else
            {
                TreeNode *p=mpp[descriptions[i][0]];
                mpp[descriptions[i][0]]=p;
                if((descriptions[i][2])==1)
                {
                    if(vis[descriptions[i][1]]==0)
                    {
                        TreeNode *left=new TreeNode(descriptions[i][1]);
                        p->left=left;
                        mpp[descriptions[i][1]]=left;
                    }
                    else
                    {
                        p->left=mpp[descriptions[i][1]]; 
                    }
                }
                else
                {
                    if(vis[descriptions[i][1]]==0)
                    {
                        TreeNode *right=new TreeNode(descriptions[i][1]);
                        p->right=right;
                        mpp[descriptions[i][1]]=right;
                    }
                    else
                    {
                        p->right=mpp[descriptions[i][1]];
                    }
                    
                }
                vis[descriptions[i][0]]=1;
                vis[descriptions[i][1]]=1;
            }
        }
        return mpp[*s.begin()];
    }
};