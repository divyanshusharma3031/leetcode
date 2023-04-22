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
    #define Node TreeNode
    vector<TreeNode *> ans;
    unordered_map<string,vector<TreeNode*>> mpp;
    vector<TreeNode*> solve(int i,int j,vector<int> &arr)
    {
        if(i>j)
        {
            return {NULL};
        }
        if(i==j)
        {
            Node *root=new Node(arr[i]);
            return {root};
        }
        string s=to_string(i)+"#"+to_string(j);
        if(mpp.find(s)!=mpp.end())
        {
            return mpp[s];
        }
        vector<TreeNode*> v;
        for(int k=i;k<=j;k++)
        {   
            vector<TreeNode *> temp1=solve(i,k-1,arr);
            vector<TreeNode *> temp2=solve(k+1,j,arr);
            for(auto it:temp1)
            {
                for(auto it2:temp2)
                {
                    Node *root=new Node(arr[k]);
                    root->left=it;
                    root->right=it2;
                    v.push_back(root);
                }
            }
        }
        return mpp[s]=v;
    }
    vector<TreeNode*> generateTrees(int n) {
        vector<int> v;
        for(int i=1;i<=n;i++)
        {
            v.push_back(i);
        }
        int i=0;
        int j=n-1;
        for(int k=i;k<=j;k++)
        {
            vector<TreeNode *> temp1=solve(i,k-1,v);
            vector<TreeNode *> temp2=solve(k+1,j,v);
            for(auto it:temp1)
            {
                for(auto it2:temp2)
                {
                    Node *root=new Node(v[k]);
                    root->left=it;
                    root->right=it2;
                    ans.push_back(root);
                }
            }
        }
        return ans;
    }
};