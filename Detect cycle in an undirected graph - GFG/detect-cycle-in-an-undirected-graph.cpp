// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<int> vis(V+1,0);
        for(int i=0;i<V;i++)
        {
            queue<pair<int,int>> q;
            if(vis[i]==0)
            {
                vis[i]=1;
                q.push({i,-1});
                while(!q.empty())
                {
                    int x=q.front().first;
                    int y=q.front().second;
                    q.pop();
                    for(auto it:adj[x])
                    {
                        if(vis[it]!=0)
                        {
                            if(it!=y)
                            {
                                return true;
                            }
                        }
                        else
                        {
                            q.push({it,x});
                            vis[it]=1;
                        }
                    }
                }
            }
        }
        return false;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends