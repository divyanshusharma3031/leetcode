// { Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




 // } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        int c=0;
        Node *p=head;
        while(p)
        {
            p=p->next;
            c++;
        }
        if(c%2)
        {
            int n=c/2;
            Node *x=head;
            Node *y=NULL;
            Node *z=NULL;
            while(n)
            {
                y=z;
                z=x;
                 x=x->next;
                z->next=y;
                n=n-1;
            }
            x=x->next;
            while(x!=NULL && z!=NULL)
            {
                if(x->data!=z->data)
                {
                    return false;
                }
                x=x->next;
                z=z->next;
            }
            return true;
        }
        int n=c/2;
            Node *x=head;
            Node *y=NULL;
            Node *z=NULL;
            while(n--)
            {
                y=z;
                z=x;
                x=x->next;
                z->next=y;
            }
            while(x!=NULL && z!=NULL)
            {
                if(x->data!=z->data)
                {
                    return false;
                }
                x=x->next;
                z=z->next;
            }
            return true;
    }
};



// { Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}

  // } Driver Code Ends