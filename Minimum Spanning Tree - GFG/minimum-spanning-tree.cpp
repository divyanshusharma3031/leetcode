// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        vector<int> key(V,0);
        vector<int> MST(V,0);
        vector<int> parent(V);
        for(int i=0;i<V;i++)
        {
            key[i]=INT_MAX;
            parent[i]=-1;
        }
        key[0]=0;
        for(int i=0;i<V-1;i++)
        {
            int mn=INT_MAX;
            int u=-1;
            for(int j=0;j<V;j++)
            {
                if(mn>key[j] && MST[j]==0)
                {
                    u=j;
                    mn=key[j];
                }
            }
            MST[u]=1;
            for(auto it:adj[u])
            {
                if(MST[it[0]]==0 && it[1]<key[it[0]])
                {
                    parent[it[0]]=u;
                    key[it[0]]=it[1];
                }
            }
        }
        long long ans=0;
        for(int i=0;i<V;i++)
        {
            ans+=key[i];
        }
        return ans;
    }
};

// { Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}

  // } Driver Code Ends