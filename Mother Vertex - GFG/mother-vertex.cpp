//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution 
{
    public:
    //Function to find a Mother Vertex in the Graph.
    int vis[501];
    void dfs(int node,vector<int> adj[],set<int> &s)
    {
        if(s.find(node)!=s.end())
        {
            return;
        }
        vis[node]=1;
        s.insert(node);
        for(auto it:adj[node])
        {
            dfs(it,adj,s);
        }
        return;
    }
	int findMotherVertex(int V, vector<int>adj[])
	{
	    // Code here
	    memset(vis,0,sizeof(vis));
	    for(int i=0;i<V;i++)
	    {
	        if(!vis[i])
	        {
                set<int> s;
                dfs(i,adj,s);
                if(s.size()==V)
                {
                    return i;
                }
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