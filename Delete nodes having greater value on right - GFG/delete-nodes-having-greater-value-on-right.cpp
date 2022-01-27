// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



 // } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
       struct Node* rev(struct Node* p)
    {
        struct Node * q=NULL;
        struct Node * r=NULL;
        while(p)
        {
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        return q;
    }
    Node *compute(Node *head)
    {
        // your code goes here
        vector<int> aux;
        Node *p=head;
        while(p)
        {
            aux.push_back(p->data);
            p=p->next;
        }
        
        reverse(aux.begin(),aux.end());
        
        int i=0;
        int n=aux.size();
        
        vector<int> arr(aux.size());
        
        arr[0]=-1;
        int c=aux[0];
        for(i=1;i<aux.size();i++)
        {
            arr[i]=c;
            c=max(c,aux[i]);
        }
        
        reverse(arr.begin(),arr.end());
        
        Node *x;
        
        p=head;
        i=0;
        Node *temp=NULL;
        while(p)
        {
            if(p->data>=arr[i])
            {
                x=new Node(p->data);
                x->next=temp;
                temp=x;
            }
            p=p->next;
            i++;
        }
        return rev(x);
    }
    
};
   


// { Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}
  // } Driver Code Ends