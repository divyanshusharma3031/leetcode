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
    int helper(TreeNode* root, int *arr,int odd)
    {
        if(root==NULL)
        {
            return 0;
        }
        arr[root->val]++;
        if(arr[root->val]%2)
        {
            odd++;
        }
        else
        {
            odd--;
        }
        if(root->left==NULL && root->right==NULL)
        {
            int ans=0;
            if(odd<2)
            {
                ans=1;
            }
            if(arr[root->val]%2==0)
            {
                odd--;
            }
            else
            {
                odd++;
            }
            arr[root->val]--;
            return ans;
        }
        int ans=helper(root->left,arr,odd)+helper(root->right,arr,odd);
        if(arr[root->val]%2==0)
        {
            odd--;
        }
        else
        {
            odd++;
        }
        arr[root->val]--;
        return ans;
    }
    
    int pseudoPalindromicPaths (TreeNode* root) 
    {
        int arr[10] ={0};
        int odd=0;
        int res=0;
        return helper(root,arr,odd);
    }
};