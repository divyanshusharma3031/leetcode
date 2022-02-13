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

Node *constructTree (int [], int );

void printInorder (Node* node)
{
	if (node == NULL)
		return;
	printInorder(node->left);
	printf("%d ", node->data);
	printInorder(node->right);
	

}

int main ()
{   
    int t,n;
   scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int post[n];
        for(int i=0;i<n;i++)
        scanf("%d",&post[i]);

    Node* root = constructTree(post, n);

	printInorder(root);
    printf("\n");
}
	return 0;
}
// } Driver Code Ends


/*struct Node
{
	int data;
	Node *left, *right;
};*/
int x;
Node *build(int post[],int size,int val,int mn,int mx)
{
    if(x<0)
    {
        return NULL;
    }
   
    Node *root=NULL;
    if(val>=mn && val<=mx)
    {
        root=new Node(post[x]);
        x--;
        // root=new Node(post[x]);
        root->right=build(post,size,post[x],root->data,mx);
        root->left=build(post,size,post[x],mn,root->data);
    }
    return root;
}

Node *constructTree (int post[], int size)
{
//code here
    int mn=INT_MIN;
    int mx=INT_MAX;
    x=size-1;
    Node *root= build(post,size,post[size-1],mn,mx);
    x=0;
    return root;
}