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
    Node *merge(Node *head, Node *temp)
    {
        Node *start, *newhead;
        if (head->data <= temp->data)
        {
            start = head;
            head = head->next;
        }
        else
        {
            start = temp;
            temp = temp->next;
        }
        newhead = start;
        while (head != NULL && temp != NULL)
        {
            if (head->data <= temp->data)
            {
                start->next = head;
                head = head->next;
            }
            else
            {
                start->next = temp;
                temp = temp->next;
            }
            start = start->next;
        }
        while (head != NULL)
        {
            start->next = head;
            head = head->next;
            start = start->next;
        }
        while (temp != NULL)
        {
            start->next = temp;
            temp = temp->next;
            start = start->next;
        }
        return newhead;
    }
    Node *msort(Node *&head)
    {
        if (head == NULL || head->next == NULL)
        return head;
        Node *slow = head, *fast = head;
        while (fast->next != NULL && fast->next->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        Node *temp = slow->next;
        slow->next = NULL;
        Node *l1=msort(head);
        Node *l2=msort(temp);
        head=merge(head, temp);
        return head;
    }
    Node* mergeSort(Node* head) {
        // your code here
        return msort(head);
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