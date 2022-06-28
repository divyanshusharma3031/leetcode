// { Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node * reverse(struct Node *head)
    {
        struct Node *p=head;
        struct Node *q=NULL;
        struct Node *r=NULL;
        
        while(p)
        {
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        return q;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        struct Node *p=reverse(first);
        struct Node *q=reverse(second);
        
        struct Node *ans=NULL;
        
        int c=0;
        
        while(p && q)
        {
            struct Node *temp=new Node(p->data+q->data);
            if(c>0)
            {
                temp->data=temp->data+c;
                c=0;
            }
            int x=temp->data;
            temp->data=x%10;
            temp->next=ans;
            ans=temp;
            c=x/10;
            p=p->next;
            q=q->next;
        }
        while(p)
        {
            struct Node *temp=new Node(p->data);
            if(c>0)
            {
                temp->data=temp->data+c;
                c=0;
            }
            int x=temp->data;
            temp->data=x%10;
            temp->next=ans;
            ans=temp;
            c=x/10;
            p=p->next;
        }
        while(q)
        {
            struct Node *temp=new Node(q->data);
            if(c>0)
            {
                temp->data=temp->data+c;
                c=0;
            }
            int x=temp->data;
            temp->data=x%10;
            temp->next=ans;
            ans=temp;
            c=x/10;
            q=q->next;
        }
        while(c!=0)
        {
            struct Node *temp=new Node(c);
            temp->next=ans;
            ans=temp;
            c=0;
        }
        return ans;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends