//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
//User function Template for C++

#define vvi vector<vector<int>>
class Solution{
    private:
    vvi levelOrderTraversal(Node* root)
    {
        vvi ans;
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty())
        {
            int n = q.size();
            vector<int> level;
            for(int i=0;i<n;i++)
            {
                auto p = q.front();
                q.pop();
                level.push_back(p->data);
                
                if(p->left)q.push(p->left);
                if(p->right)q.push(p->right);
            }
            
            ans.push_back(level);
        }
        
        
        return ans;
    }
    
    
    public:
    bool areAnagrams(Node *root1, Node *root2)
    {
        vvi lot1 = levelOrderTraversal(root1);
        vvi lot2 = levelOrderTraversal(root2);
        
        int n = lot1.size();
        int m = lot2.size();
        
        if(n!=m)return false;
        
        for(int i=0;i<n;i++)
        {
            sort(lot1[i].begin(),lot1[i].end());
        }
        
         for(int i=0;i<m;i++)
        {
            sort(lot2[i].begin(),lot2[i].end());
        }
        
        return (lot1 == lot2);
    }
};

//{ Driver Code Starts.

/* Driver program to test size function*/
int main() {
    int t;
    scanf("%d\n", &t);
    while (t--) {
        string treeString1, treeString2;
        getline(cin, treeString1);
        Node *root1 = buildTree(treeString1);
        getline(cin, treeString2);
        Node *root2 = buildTree(treeString2);
        Solution ob;
        cout << ob.areAnagrams(root1, root2) << endl;
    }
    return 0;
}

// } Driver Code Ends