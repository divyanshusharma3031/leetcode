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
    typedef pair<TreeNode *,unsigned long long> PNULL;
    int widthOfBinaryTree(TreeNode* root) {
        if( !root )
        {
            return 0;
        }
        queue<PNULL> q;
        q.push({root, 1 });
        unsigned long long ans = 0;
        while(!q.empty() ){
            int size = q.size();
            if (size == 1){
                q.push({q.front().first,1});
                q.pop();
            }
            ans = max( (q.back().second - q.front().second)/2ll + 1ll, ans);
            while( size--){
                auto node = q.front().first;
                auto idx = q.front().second;
                q.pop();
                if( node->left )
                {
                    q.push({node->left, idx*2ll-1ll});
                }
                if( node->right )
                {
                    q.push({node->right, idx*2ll+1ll});
                }
            }
            
        }
        return ans;
    }
};