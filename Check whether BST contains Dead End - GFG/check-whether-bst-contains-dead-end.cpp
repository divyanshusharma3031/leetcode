// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void insert(Node ** tree, int val)
{
    Node *temp = NULL;
    if(!(*tree))
    {
        temp = new Node(val);
        *tree = temp;
        return;
    }

    if(val < (*tree)->data)
    {
        insert(&(*tree)->left, val);
    }
    else if(val > (*tree)->data)
    {
        insert(&(*tree)->right, val);
    }

}




int getCountOfNode(Node *root, int l, int h)
{

    if (!root) return 0;


    if (root->data == h && root->data == l)
        return 1;

    if (root->data <= h && root->data >= l)
         return 1 + getCountOfNode(root->left, l, h) +
                    getCountOfNode(root->right, l, h);

    else if (root->data < l)
         return getCountOfNode(root->right, l, h);


    else return getCountOfNode(root->left, l, h);
}


bool isDeadEnd(Node *root);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Node *root;
        Node *tmp;
    //int i;

        root = NULL;

        int N;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            int k;
            cin>>k;
            insert(&root, k);

        }

        
     cout<<isDeadEnd(root);
     cout<<endl;
    }
}

// } Driver Code Ends


/*The Node structure is
struct Node {
int data;
Node * right, * left;
};*/

/*You are required to complete below method */

bool checkdead(Node *root,int lbound,int ubound,map<Node*,int> &dp)
{
    if(!root)
    {
        return false;
    }
    if(lbound>=ubound)
    {
        return true;
    }
    if(dp[root]!=0)
    {
        if(dp[root]==1)
        {
            return true;
        }
        return false;
    }
    bool res=checkdead(root->left,lbound,root->data-1,dp)|| checkdead(root->right,root->data+1,ubound,dp);
    if(res==true)
    {
        dp[root]=1;
    }
    else
    {
        dp[root]=-1;
    }
    return res;
}
bool isDeadEnd(Node *root)
{
    //Your code here
    map<Node*,int> dp;
    return checkdead(root,1,INT_MAX,dp);
}