//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
public:
    // Function to find number of strongly connected components in the graph.
    void dfs(int i, vector<int> adj[], stack<int> &s, vector<int> &vis)
    {
        if (vis[i])
        {
            return;
        }
        vis[i] = 1;
        for (auto it : adj[i])
        {
            dfs(it, adj, s, vis);
        }
        s.push(i);
    }
    void dfs2(int node, vector<int> adj[], vector<int> &vis)
    {
        if (vis[node])
        {
            return;
        }
        vis[node] = 1;
        for (auto it : adj[node])
        {
            dfs2(it, adj, vis);
        }
    }
    int kosaraju(int V, vector<vector<int>> &arr)
    {
        // code here
        vector<int> adj[V + 1];
        vector<int> rev_adj[V + 1];
        int n=arr.size();
        for (int i = 0; i < V; i++)
        {
            for (auto it : arr[i])
            {
                adj[i].push_back(it);
                rev_adj[it].push_back(i);
            }
        }
        stack<int> s;
        vector<int> vis(V+1, 0);
        for (int i = 0; i < n; i++)
        {
            if (vis[i] == 0)
            {
                dfs(i, adj, s, vis);
            }
        }
        for (int i = 0; i < n; i++)
        {
            vis[i] = 0;
        }
        int c = 0;
        while (!s.empty())
        {
            auto it = s.top();
            s.pop();
            if (vis[it] == 0)
            {
                dfs2(it, rev_adj, vis);
                c++;
            }
        }
        return c;
    }
};



//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<vector<int>> adj(V);

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends