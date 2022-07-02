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
    Node * createTree(vector<int> &nums,int lo,int hi)
    {
        if(lo>hi)
        {
            return NULL;
        }
        int mid=lo+(hi-lo)/2;
        int x=nums[mid];
        Node *root=new Node(x);
        root->left=createTree(nums,lo,mid-1);
        root->right=createTree(nums,mid+1,hi);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
        return createTree(nums,0,n-1);
    }
};