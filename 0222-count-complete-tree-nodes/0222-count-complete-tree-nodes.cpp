class Solution {
public:
    void leaf(TreeNode *root,vector<TreeNode*> &arr,int h)
    {
        if(!root)
        {
            return;
        }
        if(h==1)
        {
            arr.push_back(root);
            return;
        }
        leaf(root->left,arr,h-1);
        leaf(root->right,arr,h-1);
    }
    int countNodes(TreeNode* root) {
        long long h=0;
        TreeNode *p=root;
        while(p)
        {
            p=p->left;
            h++;
        }
        if(h==1)
        {
            return 1;
        }
        p=root;
        TreeNode *prev=NULL;
        long long c=pow(2,h-1)-1;
        vector<TreeNode *> arr;
        leaf(root,arr,h-1);
        // cout<<arr.size()<<"\n";
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]->left && arr[i]->right)
            {
                c+=2;
            }
            else if(!arr[i]->left && !arr[i]->right)
            {
                //pass
            }
            else
            {
                c+=1;
            }
        }
        return c;
    }
};