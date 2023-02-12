//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};


// } Driver Code Ends
//User function Template for C++

/*

class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};

*/

// C++ program to print all primes smaller than or equal to
// n using Sieve of Eratosthenes
 
vector<int> SieveOfEratosthenes(int n)
{

    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    // Print all prime numbers
    vector<int> ans;
    for (int p = 2; p <= n; p++)
        if (prime[p])
            ans.push_back(p);
    return ans;
}
class Solution{
public:
    Node *primeList(Node *head){
        Node *h=head;
        vector<int> ans=SieveOfEratosthenes(20000);
        while(h!=NULL)
        {
            int idx=lower_bound(ans.begin(),ans.end(),h->val)-ans.begin();
            int idx2=idx-1;
            int diff1=abs(h->val-ans[idx]);
            int diff2=1e9;
            if(idx2>=0)
            {
                diff2=abs(h->val-ans[idx2]);
            }
            if(diff1>=diff2)
            {
                h->val=ans[idx2];
            }
            else
            {
                h->val=ans[idx];
            }
            h=h->next;
        }
        return head;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Node *head,*tail;
        int num;
        cin>>num;
        head=tail=new Node(num);
        for(int i=0;i<n-1;i++){
            int num;
            cin>>num;
            tail->next=new Node(num);
            tail=tail->next;
        }
        Solution ob;
        Node *temp=ob.primeList(head);
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends