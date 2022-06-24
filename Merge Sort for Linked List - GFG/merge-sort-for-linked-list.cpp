// { Driver Code Starts
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


 // } Driver Code Ends
/* Structure of the linked list node is as
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/


class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
    Node* reverse(Node* head) {
        Node *q=NULL;
        Node *r=NULL;
        Node *p=head;
        while(p)
        {
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        return q;
    }
    Node *middle(Node *head)
    {
        Node *slow=head;
        Node *fast=head;
        Node *temp=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            temp=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        return temp;
    }
    Node *merge(Node *l1,Node *l2)
    {
        Node *l3;
        Node *prev=NULL;
        while(l1 && l2)
        {
            if(l1->data<l2->data)
            {
                l3=new Node(l1->data);
                l3->next=prev;
                prev=l3;
                l1=l1->next;
            }
            else
            {
                l3=new Node(l2->data);
                l3->next=prev;
                prev=l3;
                l2=l2->next;
            }
        }
        while(l1)
        {
                l3=new Node(l1->data);
                l3->next=prev;
                prev=l3;
                l1=l1->next;
        }
        while(l2)
        {
            l3=new Node(l2->data);
            l3->next=prev;
            prev=l3;
            l2=l2->next;
        }
        l3=reverse(l3);
        return l3;
    }
    Node * mergesort(Node *head)
    {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        Node *t=middle(head);//middle pointer;
        Node *temp=t->next;
        t->next=NULL;
        Node *l1=mergesort(head);
        Node *l2=mergesort(temp);
        head=merge(l1,l2);
        return head;
    }
    Node* mergeSort(Node* head) {
        // your code here
        head=mergesort(head);
        return head;
    }
};


// { Driver Code Starts.

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    long test;
    cin >> test;
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        Solution obj;
        a = obj.mergeSort(a);
        printList(a);
    }
    return 0;
}  // } Driver Code Ends