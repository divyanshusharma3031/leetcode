// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

typedef pair<int,int> pii;
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
        priority_queue<pii,vector<pii>,greater<pii>> pq;
        for(int i=0;i<V;i++)
        {
            key[i]=INT_MAX;
            parent[i]=-1;
        }
        key[0]=0;
        pq.push({0,0});
        while(!pq.empty())
        {
            int mn=INT_MAX;
            int u=pq.top().second;
            pq.pop();
            MST[u]=1;
            for(auto it:adj[u])
            {
                // cout<<u<<" ";
                if(MST[it[0]]==0 && it[1]<key[it[0]])
                {
                    parent[it[0]]=u;
                    // cout<<it[0]<<" "<<key[it[0]]<<" ";
                    key[it[0]]=it[1];
                    // cout<<it[1]<<"\n";
                    pq.push({it[1],it[0]});
                }
            }
        }
        long long ans=0;
        for(int i=0;i<V;i++)
        {
            // cout<<key[i]<<" ";
            ans+=key[i];
            // cout<<ans<<" ";
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