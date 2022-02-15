// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool check(int node,vector<int> adj[],vector<int> &vis,vector<int> &dfsvis)
    {
       vis[node]=1;
       dfsvis[node]=1;
       for(int i=0;i<adj[node].size();i++)
       {
           if(vis[adj[node][i]]==0)
           {
               if(check(adj[node][i],adj,vis,dfsvis))
               {
                   return true;
               }
           }
           if(dfsvis[adj[node][i]]==1)
               {
                   return true;
               }
            // dfsvis[adj[node][i]]=0;
       }
      dfsvis[node]=0;
       return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        // int n=adj.size();
        vector<int> vis(V,0);
        vector<int> dfsvis(V,0);
        for(int i=0;i<V;i++)
        {
            if(vis[i]==0)
            {
                if(check(i,adj,vis,dfsvis))
                {
                    return true;
                }
            }
        }
        return false;
    }
};
// 6 5
// 5 3
// 3 1
// 1 2
// 2 4
// 4 0

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends