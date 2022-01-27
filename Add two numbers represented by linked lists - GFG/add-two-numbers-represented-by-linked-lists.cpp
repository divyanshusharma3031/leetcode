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
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        Node *x;
        first=rev(first);
        second=rev(second);
        
        int c=0;
        Node *temp=NULL;
        
        while(first && second)
        {
            x=new Node(first->data + second->data);
            if(c!=0)
            {
                x->data=x->data+c;
                c=0;
            }
            c=(x->data)/10;
            x->data=(x->data)%10;
            x->next=temp;
            temp=x;
            first=first->next;
            second=second->next;
        }
        while(first)
        {
            x=new Node(first->data);
            if(c!=0)
            {
                x->data=x->data+c;
                c=0;
            }
            c=(x->data)/10;
            x->data=(x->data)%10;
            x->next=temp;
            temp=x;
            first=first->next;
        }
        while(second)
        {
            x=new Node(second->data);
            if(c!=0)
            {
                x->data=x->data+c;
                c=0;
            }
            c=(x->data)/10;
            x->data=(x->data)%10;
            x->next=temp;
            temp=x;
            second=second->next;
        }
        if(c)
        {
            x=new Node(c);
            x->next=temp;
            temp=x;
            c=0;
        }
        return x;
        
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