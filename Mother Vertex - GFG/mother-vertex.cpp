//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution 
{
    public:
    //Function to find a Mother Vertex in the Graph.
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
    void dfs2(int node, vector<int> adj[], vector<int> &vis,vector<int> &temp)
    {
        if (vis[node])
        {
            return;
        }
        temp.push_back(node);
        vis[node] = 1;
        for (auto it : adj[node])
        {
            dfs2(it, adj, vis,temp);
        }
    }
    vector<vector<int>> kosaraju(int V, vector<int> adj[])
    {
        // code here
        vector<int> rev_adj[V + 1];
        for (int i = 0; i < V; i++)
        {
            for (auto it : adj[i])
            {
                rev_adj[it].push_back(i);
            }
        }
        stack<int> s;
        int n=V;
        vector<int> vis(n, 0);
        for (int i = 0; i < n; i++)
        {
            if (vis[i] == 0)
            {
                dfs(i, adj, s, vis);
            }
        }
        for (int i = 0; i < V; i++)
        {
            vis[i] = 0;
        }
        int c = 0;
        vector<vector<int>> SCCS;
        while (!s.empty())
        {
            auto it = s.top();
            s.pop();
            if (vis[it] == 0)
            {
                vector<int> temp;
                dfs2(it, rev_adj, vis,temp);
                SCCS.push_back(temp);
                c++;
            }
        }
        return SCCS;
    }
    void check(int node,vector<int> adj[],int &count,vector<int> &vis)
    {
        if(vis[node])
        {
            return ;
        }
        vis[node]=1;
        count++;
        for(auto it:adj[node])
        {
            check(it,adj,count,vis);
        }
    }
	int findMotherVertex(int V, vector<int>adj[])
	{
	    // Code here
        vector<vector<int>> SCCS=kosaraju(V,adj);
        int c=SCCS.size();
        vector<int> new_adj[V+1];
        unordered_map<int,int> mpp;
        for(auto it:SCCS)
        {
            int n=it.size();
            int par=it[0];
            for(int i=0;i<n;i++)
            {
                mpp[it[i]]=par;
            }
        }
        for(int i=0;i<V;i++)
        {
            int x=mpp[i];
            for(auto it:adj[i])
            {
                int y=mpp[it];
                new_adj[x].push_back(y);
            }
        }
        for(int i=0;i<V;i++)
        {
            vector<int> vis(V+1,0);
            int x=mpp[i];
                int count=0;
                check(x,new_adj,count,vis);
                if(count==c)
                {
                    return x;
                }
        }
        return -1;
	}
};



//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
		}
		Solution obj;
		int ans = obj.findMotherVertex(V, adj);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends